#include <iostream>
#include <math.h>
#include <fstream>
#include <string>
#define M_PI 3.14159265358979323846
using namespace System;
using namespace std;
void newArr2(double** Arr, int row, int col);

double rad_in_deg(double rad)
{
	double deg = rad * 180 / M_PI;
	return deg;
};

double deg_in_rag(double deg)
{
	double rad = deg * M_PI / 180;
	return rad;
};

void projection(double value, double corner_rad, double &pValue_x, double &pValue_y)
{
	pValue_x = value * sin(corner_rad);
	pValue_y = value * cos(corner_rad);
	
};

double priv_360(double deg)
{
	while (deg < 0 || deg >= 360)
	{
		if (deg >= 360) { deg -= 360; }
		else { deg += 360; }
		return deg_in_rag(deg);
	};
};

double priv_2pi(double rad)
{
	while (rad < 0 || rad >= 2*M_PI)
	{
		if (rad >= 2 * M_PI) { rad -= 2 * M_PI; }
		else { rad += 2 * M_PI; }
		
	};
	return rad;
};

double priv_180(double deg)
{
	while (deg < -180 || deg >= 180)
	{
		if (deg >= 180) { deg -= 360; }
		else { deg += 360; }
		return deg_in_rag(deg);
	};
};

double priv_pi(double rad)
{
	while (rad < M_PI || rad >= M_PI)
	{
		if (rad >= M_PI) { rad -= 2 * M_PI; }
		else { rad += 2 * M_PI; }
		return rad;
	};
};

double arcTan(double X1, double X2, double Y1, double Y2)
{
	double  rad = 0;
	if (abs(Y1 - Y2) >= 0.01 && Y1 - Y2 > 0 && X1 - X2 >= 0)
	{
		rad = atan((X1 - X2) / (Y1 - Y2));
	}
	else if (abs(Y1 - Y2) >= 0.01 && Y1 - Y2 > 0 && X1 - X2 < 0)
	{
		rad = 2 * M_PI + atan((X1 - X2) / (Y1 - Y2));
	}
	else if (abs(Y1 - Y2) >= 0.01 && Y1 - Y2 < 0)
	{
		rad = M_PI + atan((X1 - X2) / (Y1 - Y2));
	}
	else if (abs(Y1 - Y2) <= 0.01 && X1 - X2 >= 0)
	{
		rad = M_PI / 2;
	}
	else if (abs(Y1 - Y2) <= 0.01 && X1 - X2 < 0)
	{
		rad = 3 * M_PI / 2;
	}
	rad = priv_2pi(rad);
	return rad;
};

double arcTan2(double X, double Y) 
{
	double rad = 0;
	if (abs(Y) >= 0.01 && Y > 0 && X >= 0)
	{rad = atan(X/Y);}
	else if (abs(Y) >= 0.01 && Y > 0 && X < 0)
	{rad = 2*M_PI + atan(X / Y);}
	else if (abs(Y) >= 0.01 && Y < 0)
	{rad = M_PI + atan(X / Y);}
	else if (abs(Y) <= 0.01 && X >= 0)
	{rad = M_PI / 2;}
	else if (abs(Y) <= 0.01 && X < 0)
	{rad = 3 * M_PI / 2;}
	rad = priv_2pi(rad);
	return rad;
}

int sign(double value)
{
	if (value > 0)
	{return 1;}
	else if (value == 0)
	{return 0;}
	else
	{return -1;}
};

void array_append
(double**& CalcVal, int& size, const int& row, double value1, double value2, double value3)
{
	double** newArr = new double* [row];
	newArr2(newArr, row, size + 1);

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < size; j++)
		{
			newArr[i][j] = CalcVal[i][j];
		}
	}
	newArr[0][size] = value1;
	newArr[1][size] = value2;
	newArr[2][size] = value3;
	size++;
	delete[] CalcVal;

	CalcVal = newArr;
}

void array_append2
(double**& CalcVal, int& size, const int& row, double value1, double value2)
{
	double** newArr = new double* [row];
	newArr2(newArr, row, size + 1);

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < size; j++)
		{
			newArr[i][j] = CalcVal[i][j];
		}
	}
	newArr[0][size] = value1;
	newArr[1][size] = value2;
	size++;
	delete[] CalcVal;

	CalcVal = newArr;
}



void showArr( double** Arr, const int row, const int size)
{
	for (int i = 0; i < row; i++)
	{
		cout << endl;
		for (int j = 0; j < size; j++)
		{
			cout << Arr[i][j] << "\t";
		}
	}
	cout << endl;
}

void showArr1(double* Arr, const int size)
{
	cout << endl;
	for (int j = 0; j < size; j++)
	{
		cout << Arr[j] << "\t";
	}
	cout << endl << endl;
}

void newArr2(double** Arr, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		Arr[i] = new double[col];
	}
}

void newArr22(int** Arr, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		Arr[i] = new int[col];
	}
}

void zeroMasInt(int** Arr, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			Arr[i][j] = 0;
		}
	}
}

void zeroMasInt1(int* Arr, int size)
{
	for (int j = 0; j < size; j++)
	{
		Arr[j] = 0;
	}
}

void newArr3(double*** Arr, int size, int row, int col)
{
	for (int i = 0; i < size; i++)
	{
		Arr[i] = new double* [row];
		for (int j = 0; j < row; j++)
		{
			Arr[i][j] = new double[col];
		}
	}
}

double  Sqr(double fArg)           
{
	return(fArg * fArg);
}

double Gauss(double mo, double sigma) 
{
	double x = 0;
	for (int i = 0; i < 12; i++)
	{
		x += (double)rand() / RAND_MAX;
	}
	x -= 6.0;
	x = mo + x * sigma;
	return x;
}

void CovSt_XY(double *Cov, double **xi, double **yi, double *Xst, double *Yst, const int N, const int col)
{
	for (int i = 0; i < col; i++)
	{
		for (int k = 0; k < N; k++)
		{

			Cov[i] += xi[k][i] * yi[k][i];
		}
		Cov[i] = (Cov[i] / N) - Xst[i] * Yst[i];
	}
}

void M_Exp(double *x_st, double **xi, const int N, const int col)
{
	for (int i = 0; i < col; i++)
	{
		for (int k = 0; k < N; k++)
		{
			x_st[i] += xi[k][i];
		}
		x_st[i] = x_st[i] / N;
	}
}

void Variance(double *VarX, double** xi, double *MoX, const int N, const int col)
{
	for (int i = 0; i < col; i++)
	{
		for (int k = 0; k < N; k++)
		{
			VarX[i] += Sqr(xi[k][i]);
		}
		VarX[i] = (VarX[i] / N) - Sqr(MoX[i]);
	}
}

void FileRec(double *Mas, const int col, std::string name) 
{
	string Date = "D:\\С++\\Proj1\\File\\";
	const char* Date2 = name.c_str();
	ofstream fout;
	fout.open(Date + Date2);
	if (fout.is_open())
	{
		for (int i = 0; i < col; i++)
		{
			fout << Mas[i] << endl;
		}
	}
	fout.close();
}

// Конвертируем System::string^ в std;;string
string& Convert_String_to_string(String^ s, string& os) 
{
	using namespace Runtime::InteropServices;
	const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
	return os;
}

char* Convert_String_to_char(String^ string) 
{
	using namespace Runtime::InteropServices;
	return (char*)(void*)Marshal::StringToHGlobalAnsi(string);
}