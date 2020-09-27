#include <iostream>
#include <fstream>
#include <string>
#include "special.h"
#include "navigation.h"
#include "matix.h"
#include "ctime"
#include "MyForm.h"
#include "viewerForm.h"
#include "Data_.h"

#define M_PI 3.14159265358979323846

using namespace std;

void algorithm()
{
	string
		WayFaile = "D:\\С++\\Proj1\\File\\StartDate\\",
		NameViewerGals = "ViewerGals.txt",
		NameViewer = "Viewer.txt",
		NameObject = "Object.txt",
		NameObjectGals = "ObjectGals.txt";
	const int End = 12;
	int N = 700, ii = 0, COL;
	double*** KPDC_DVK = new double** [3];
	double** I_mas = new double* [N];
	double** DVK_st = new double*[3];
	double** VarDVK_st = new double*[3];
	double** CovDVDKVK_st = new double*[3];
	double* TIME = new double[End];
	double Dist[End];
	double Coord[4][End];
	
	
	srand(time(0));
	while ((ii < N))
	{
		COL = 0;
		const int ROW = 3;
		double** Iy = new double* [ROW];
		
		/*======================================== Наблюдатель ========================================*/
		
		const int 
			Tn1 = ReadingFile(WayFaile, NameViewerGals, 7),			// Время первого галса 
			Tn2 = ReadingFile(WayFaile, NameViewerGals, 8),			// Время второго галса 
			Tn3 = ReadingFile(WayFaile, NameViewerGals, 9),			// Время третьего галса 
			Rcrk = ReadingFile(WayFaile, NameViewer, 1),			// Радиус циркуляции
			acc = ReadingFile(WayFaile, NameViewer, 2);				// Ускорение
		double 
			Sxn = 0,
			Syn = 0,
			Vn1 = ReadingFile(WayFaile, NameViewerGals, 1),			// Скорость на первом галсе
			Vn2 = ReadingFile(WayFaile, NameViewerGals, 2),			// Скорость на втором галсе
			Vn3 = ReadingFile(WayFaile, NameViewerGals, 3),			// Скорость на третьем галсе

			Kn1 = ReadingFile(WayFaile, NameViewerGals, 4),			// Курс на первом галсе
			Kn2 = ReadingFile(WayFaile, NameViewerGals, 5),			// Курс на втором галсе
			Kn3 = ReadingFile(WayFaile, NameViewerGals, 6),			// Курс на третьем галсе

			Vn_cur = Vn1,
			Kn_cur = Kn1,
			P0, P, Vxn, Vyn;

		projection(Vn_cur, Kn_cur, Vxn, Vyn);
		/*===================================== Объект наблюдения =====================================*/
		double
			P0_ist = ReadingFile(WayFaile, NameObject, 1),
			D0_ist = ReadingFile(WayFaile, NameObject, 2),
			RcrkObj = ReadingFile(WayFaile, NameObject, 3),
			AccObj = ReadingFile(WayFaile, NameObject, 4),

			Vk1 = ReadingFile(WayFaile, NameObjectGals, 1),
			Vk2 = ReadingFile(WayFaile, NameObjectGals, 2),
			Kk1 = ReadingFile(WayFaile, NameObjectGals, 3),
			Kk2 = ReadingFile(WayFaile, NameObjectGals, 4),
			Tk1 = ReadingFile(WayFaile, NameObjectGals, 5),
			Tk2 = ReadingFile(WayFaile, NameObjectGals, 6),

			Sxk,Syk, Vk_cur, Kk_cur;

		projection(D0_ist, deg_in_rag(P0_ist), Sxk, Syk);
		/*===================================== Расчетные значения ====================================*/
		double D0 = 0, Vxk = 0, Vyk = 0, delX = 0, delY = 0, delV = 0, delK = 0, Dx = 0, Dy = 0;
		/*====================================== Истиные значения =====================================*/
		double Sx_ist = Sxk, Sy_ist = Syk, Vx_ist = 0, Vy_ist = 0, Dyi = Sy_ist,
			Dxi = Sx_ist, K_ist = deg_in_rag(Kk);
		double V_ist = Vk;
		/*====================================== Работа с циклом ======================================*/
		int time = 0, dt = 1, ij = 0, T = 0;
		int InitKey = 0;
		bool turn = false;
		double* pA, * pB;
		/*========================================== Массивы ==========================================*/
		int col = COL, col2 = COL, col3 = COL;
		const int row = ROW, row3 = ROW;
		double** CalcVal = new double* [row];
		double** Tolerance = new double* [row];

		newArr2(CalcVal, row, col);
		newArr2(Tolerance, row, col);
		
		Kn_cur = deg_in_rag(Kn_cur);
		Kk = deg_in_rag(Kk);


		while (InitKey < End)
		{
			if (InitKey >= End/2)
			{
				turn = current_course(K_ist, Kn_cur, Vn_cur, Rcrk, dt);
			}
			else if (InitKey >= 1 )
			{
				turn = current_course(P0, Kn_cur, Vn_cur, Rcrk, dt);

			}

			if ((time % 40 == 0 && turn == false) || time == 0)
			{

				TIME[col] = time;
				// Расчет КПДЦ
				P = arcTan(Sx_ist, Sxn, Sy_ist, Syn);
				P = Gauss(P, deg_in_rag(1));
				priv_2pi(P);
				if (time == 0)
				{
					P0 = P;
				}
				
				matrix(time, P, Sxn, Syn, InitKey, ij, D0, Vxk, Vyk);
				Vk = sqrt(Sqr(Vxk) + Sqr(Vyk));
				Kk = arcTan2(Vxk, Vyk);
				projection(D0, Kk, Dx, Dy);
				Sxk += Vxk * (time - T);
				Syk += Vyk * (time - T);

				// Допустимые погрешности 
				delX = abs(0.15 * D_ist);
				delV = 1;
				delK = 10;

				// Запись значений в массивы
				Dist[col] = D_ist;
				array_append(CalcVal, col, row, D0, Vk, rad_in_deg(Kk));
				array_append(Tolerance, col3, row3, delX, delV, delK);
				T = time;
				InitKey += 1;
			}
			if (time == 0)
			{
				Dxi = Sx_ist - Sxn;
				Dyi = Sy_ist - Syn;
				D_ist = sqrt(Sqr(Dxi) + Sqr(Dyi));
			}

			// Пересчет координат наблюдателя
			Vn_cur = current_speed(Vn1, Vn_cur, acc, dt);
			projection(Vn_cur, Kn_cur, Vxn, Vyn);
			conversion_coord(Sxn, Syn, Vxn, Vyn, dt);

			// Пересчет истиных координат объекта
			projection(V_ist, K_ist, Vx_ist, Vy_ist);
			conversion_coord(Sx_ist, Sy_ist, Vx_ist, Vy_ist, dt);
			if (time % 31 == 0)
			{
				Kn_cur = Gauss(Kn_cur, deg_in_rag(5));
				Vn_cur = Gauss(Vn_cur, 3);
			}
			Coord[0][col - 1] = Sxn;
			Coord[1][col - 1] = Syn;
			Coord[2][col - 1] = Sx_ist;
			Coord[3][col - 1] = Sy_ist;
			
			time += dt;
		}
		// Конец 1 цикла
		K_ist = rad_in_deg(K_ist);
		COL = col;
		if (ii == 0)
		{
			newArr2(I_mas, N, COL);
			newArr3(KPDC_DVK, 3, N, COL);
			newArr2(DVK_st, 3, COL);
			newArr2(VarDVK_st, 3, COL);
			newArr2(CovDVDKVK_st, 3, COL);
			zeroing1(DVK_st[0], COL);
			zeroing1(DVK_st[1], COL);
			zeroing1(DVK_st[2], COL);
			zeroing1(VarDVK_st[0], COL);
			zeroing1(VarDVK_st[1], COL);
			zeroing1(VarDVK_st[2], COL);
			zeroing1(CovDVDKVK_st[0], COL);
			zeroing1(CovDVDKVK_st[1], COL);
			zeroing1(CovDVDKVK_st[2], COL);
			
		}

		for (int i = 0; i < COL; i++)
		{
			KPDC_DVK[0][ii][i] = CalcVal[0][i];
			KPDC_DVK[1][ii][i] = CalcVal[1][i];
			KPDC_DVK[2][ii][i] = CalcVal[2][i];

			// Расчет отклонений
			CalcVal[0][i] -= Dist[i];	// Дистанция D0
			CalcVal[1][i] -= V_ist;		// Скорость объекта
			CalcVal[2][i] -= K_ist;		// Курс объекта
		}
		
		// Сравнение полученных отклонений с допустимыми 
		newArr2(Iy, ROW, COL);
		for (int j = 0; j < row; j++)
		{
			for (int k = 0; k < COL; k++)
			{
				if (abs(CalcVal[j][k]) < Tolerance[j][k])
				{Iy[j][k] = 1;}
				else
				{Iy[j][k] = 0;}
			}
		}

		
		double *I = new double[COL];
		for (int j = 0; j < COL; j++)
		{
			int SUM = 0;
			for (int i = 0; i < ROW; i++)
			{
				if (Iy[i][j] == 1)
				{
					SUM++;
				}
				if(SUM == 3)
				{
					I[j] = 1;
				}
				else
				{
					I[j] = 0;
				}
			}
		}

		for (int i = 0; i < COL; i++)
		{
			// Массив указателей успешного решения задачи
			I_mas[ii][i] = I[i];
		}

		delete[] CalcVal, Tolerance, Iy, I;
		ii++;
	}
	// Пространство за циклами

	// Статистическое МО для каждого из замеров
	M_Exp(DVK_st[0], KPDC_DVK[0], N, COL);
	M_Exp(DVK_st[1], KPDC_DVK[1], N, COL);
	M_Exp(DVK_st[2], KPDC_DVK[2], N, COL);

	// Статистическая дисперсия для каждого из замеров
	Variance(VarDVK_st[0], KPDC_DVK[0], DVK_st[0], N, COL);
	Variance(VarDVK_st[1], KPDC_DVK[1], DVK_st[1], N, COL);
	Variance(VarDVK_st[2], KPDC_DVK[2], DVK_st[2], N, COL);

	// Статистические ковариации 
	CovSt_XY(CovDVDKVK_st[0], KPDC_DVK[0], KPDC_DVK[1], DVK_st[0], DVK_st[1], N, COL);
	CovSt_XY(CovDVDKVK_st[1], KPDC_DVK[0], KPDC_DVK[2], DVK_st[0], DVK_st[2], N, COL);
	CovSt_XY(CovDVDKVK_st[2], KPDC_DVK[1], KPDC_DVK[2], DVK_st[1], DVK_st[2], N, COL);

	

	double* P_ID = new double[COL];
	zeroing1(P_ID, COL);
	for (int j = 0; j < COL; j++)
	{
		for (int i = 0; i < N; i++)
		{
			P_ID[j] += I_mas[i][j];
		}
	}

	for (int i = 0; i < COL; i++)
	{
		P_ID[i] = P_ID[i] / N;   // Вероятность успешного решения задачи, где i - номер замера 
	}
	//showArr1(P_ID, COL);
	FileRec(DVK_st[0], COL, "MO_D_st.txt");
	FileRec(DVK_st[1], COL, "MO_V_st.txt");
	FileRec(DVK_st[2], COL, "MO_K_st.txt");
	FileRec(VarDVK_st[0], COL, "Var_D_st.txt");
	FileRec(VarDVK_st[1], COL, "Var_V_st.txt");
	FileRec(VarDVK_st[2], COL, "Var_K_st.txt");
	FileRec(CovDVDKVK_st[0], COL, "Cov_DV.txt");
	FileRec(CovDVDKVK_st[1], COL, "Cov_DK.txt");
	FileRec(CovDVDKVK_st[2], COL, "Cov_VK.txt");
	FileRec(P_ID, COL, "P_ID.txt");
	FileRec(TIME, COL, "TIME_sec.txt");
	FileRec(Dist, COL, "D_ist.txt");
	FileRec(Coord[0], COL, "Xn.txt");
	FileRec(Coord[1], COL, "Yn.txt");
	FileRec(Coord[2], COL, "Xk.txt");
	FileRec(Coord[3], COL, "Yk.txt");
	
	delete[] I_mas, P_ID, KPDC_DVK, DVK_st, VarDVK_st, TIME;
}
