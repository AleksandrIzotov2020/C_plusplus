#pragma once
void matrix
(int time, double bearing, double Sx, double Sy, int& InitKey, int& i,
	double& dist, double& speed_x, double& speed_y);

void CalcABPass
(int time, double bearing, double Sxn, double Syn, int& InitKey, int& i,
	double(*)[3], double(*pB)[1]);


double det33(double(*)[3]);
void zeroing(double(*)[3], double(*)[1], double(*)[1]);
void inv(double(*)[3]);
void moll(double(*)[3]);
void transposition33(double(*)[3]);
void multNum(double(*)[3], double num);
void mult33x31(double(*)[3], double(*pB)[1], double(*pX)[1]);
void zeroing1(double* Mas, const int size);
void CalcABPass1
(int time, double bearing, double Sxn, double Syn, int& InitKey, int& i,
	double(*pA)[3], double(*pB)[1]);
