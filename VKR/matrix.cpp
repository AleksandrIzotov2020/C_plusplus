#include <iostream>;
#include "special.h"

using namespace std;
void CalcABPass1
(int time, double bearing, double Sxn, double Syn, int& InitKey, int& i,
	double(*)[3], double(*pB)[1]);
void zeroing(double(*)[3], double(*)[1], double(*)[1]);
void inv(double(*)[3]);
void moll(double(*)[3]);
void transposition33(double(*)[3]);
void multNum(double(*)[3], double num);
void mult33x31(double (*)[3], double(*pB)[1], double(*pX)[1]);


double T0, P0, Sxn0, Syn0, a, b, c, h, P;
double A[3][3], Z[3][3];
double B[3][1], X[3][1], C[3][1];



void matrix
(int time, double bearing, double Sx, double Sy, int &InitKey, int &i,
	double &dist, double &speed_x, double &speed_y)
{
	double det, det1, det2, det3;
	if (InitKey == 0)
	{
		zeroing(A, B, X);
	}
	CalcABPass1(time, bearing, Sx, Sy, InitKey, i, A, B);
	for (int j = 0; j < 3; j++)
	{
		C[j][0] = B[j][0];
		for (int k = 0; k < 3; k++)
		{
			Z[j][k] = A[j][k];
		}
	}
	inv(A);
	mult33x31(A, B, X);
	dist = X[0][0];
	speed_x = X[1][0];
	speed_y = X[2][0];
	zeroing(A, B, X);
	for (int j = 0; j < 3; j++)
	{
		B[j][0] = C[j][0];
		for (int k = 0; k < 3; k++)
		{
			A[j][k] = Z[j][k];
		}
	}

	/*if (InitKey >= 3)
	{
		if (i == 3){i = 2;}
		inv(A);
		mult33x31(A, B, X);
		dist = X[0][0];
		speed_x = X[1][0];
		speed_y = X[2][0];
		zeroing(A, B, X);
		for (int j = 0; j < 2; j++)
		{
			B[j][0] = C[j + 1][0];
			for (int k = 0; k < 3; k++)
			{
				A[j][k] = Z[j+1][k];
			}
		}
		B[2][0] = 0;
		for (int i = 0; i < 3; i++)
		{
			A[2][i] = 0;
		}
	}*/
};


void CalcABPass
(int time, double bearing, double Sxn, double Syn, int &InitKey, int &i,
	double(*pA)[3], double(*pB)[1])
{	
	if (InitKey == 0)
	{
		
		T0 = time;
		P0 = bearing;
		Sxn0 = Sxn;
		Syn0 = Syn;
	}
	P = bearing;

	double Sx = Sxn - Sxn0;
	double Sy = Syn - Syn0;

	a = sin(P0 - P);
	b = (time - T0) * cos(P);
	c = -(time - T0) * sin(P);
	h = (Sx * cos(P)) - (Sy * sin(P));

	if (a != 0 && b != 0 && c != 0 && h != 0)
	{
		pA[i][0] = a;
		pA[i][1] = b;
		pA[i][2] = c;
		pB[i][0] = h;
		i++;
	}
};

void CalcABPass1
(int time, double bearing, double Sxn, double Syn, int& InitKey, int& i,
	double(*pA)[3], double(*pB)[1])
{
	if (InitKey == 0)
	{

		T0 = time;
		P0 = bearing;
		Sxn0 = Sxn;
		Syn0 = Syn;
	}
	P = bearing;

	double Sx = Sxn - Sxn0;
	double Sy = Syn - Syn0;

	a = sin(P0 - P);
	b = (time - T0) * cos(P);
	c = -(time - T0) * sin(P);
	h = (Sx * cos(P)) - (Sy * sin(P));


	pA[0][0] = pA[0][0] + Sqr(a);
	pA[0][1] = (pA[0][1] + a * b);
	pA[0][2] = pA[0][2] + a * c;
	pA[1][1] = pA[1][1] + Sqr(b);
	pA[1][2] = (pA[1][2] + b * c);
	pA[2][2] = pA[2][2] + Sqr(c);
	pA[1][0] = pA[0][1];
	pA[2][0] = pA[0][2];
	pA[2][1] = pA[1][2];

	pB[0][0] = (pB[0][0] + a * h);
	pB[1][0] = pB[1][0] + b * h;
	pB[2][0] = (pB[2][0] + c * h);

}


double det33(double(*pA)[3])
{
	double det;
	

	det = pA[0][0] * pA[1][1] * pA[2][2] + pA[0][1] * pA[1][2] * pA[2][0] + pA[0][2] * pA[1][0] * pA[2][1] -
		pA[2][0] * pA[1][1] * pA[0][2] - pA[2][1] * pA[1][2] * pA[0][0] - pA[2][2] * pA[1][0] * pA[0][1];

	return det;
};



void zeroing(double(*pA)[3], double(*pB)[1], double(*pX)[1])
{
	for (int i = 0; i < 3; i++)
	{
		pB[i][0] = 0.0;
		pX[i][0] = 0.0;

		for (int j = 0; j < 3; j++)
		{
			pA [i][j] = 0.0;
		}
	}
}

void zeroing1(double *Mas, const int size) 
{
	for (int i = 0; i < size; i++)
	{
		Mas[i] = 0.0;
	}
}


void inv(double(*pA)[3])
{
	if (det33(pA) != 0)
	{	
		double det = det33(pA);
		transposition33(pA);
		moll(pA);
		multNum(pA, (1 / det));
	}
}


void moll(double(*pA)[3])
{
	double A00, A01, A02,
		   A10, A11, A12,
		   A20, A21, A22;

	

	A00 = (pA[1][1] * pA[2][2]) - (pA[2][1] * pA[1][2]);
	A01 = (-1)*(pA[1][0] * pA[2][2] - pA[2][0] * pA[1][2]);
	A02 = pA[1][0] * pA[2][1] - pA[2][0] * pA[1][1];

	A10 = (-1)*(pA[0][1] * pA[2][2] - pA[2][1] * pA[0][2]);
	A11 = pA[0][0] * pA[2][2] - pA[2][0] * pA[0][2];
	A12 = (-1) * (pA[0][0] * pA[2][1] - pA[2][0] * pA[0][1]);

	A20 = pA[0][1] * pA[1][2] - pA[1][1] * pA[0][2];
	A21 = (-1) * (pA[0][0] * pA[1][2] - pA[1][0] * pA[0][2]);
	A22 = pA[0][0] * pA[1][1] - pA[1][0] * pA[0][1];

	pA[0][0] = A00;
	pA[0][1] = A01;
	pA[0][2] = A02;

	pA[1][0] = A10;
	pA[1][1] = A11;
	pA[1][2] = A12;

	pA[2][0] = A20;
	pA[2][1] = A21;
	pA[2][2] = A22;
}

void transposition33(double(*pA)[3])
{
	double A01, A02, A10, A12, A20, A21;

	A01 = pA[0][1];
	A02 = pA[0][2];
	A10 = pA[1][0];
	A12 = pA[1][2];
	A20 = pA[2][0];
	A21 = pA[2][1];

	pA[0][1] = A10;
	pA[0][2] = A20;
	pA[1][0] = A01;
	pA[1][2] = A21;
	pA[2][0] = A02;
	pA[2][1] = A12;
	
	
}

void multNum(double(*pA)[3], double num)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			pA[i][j] = pA[i][j] * num;
		}
	}
}

void mult33x31(double(*pA)[3], double(*pB)[1], double(*pX)[1])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			for (int k = 0; k < 3; k++)
				pX[i][j] += pA[i][k] * pB[k][j];
		}
	}
}