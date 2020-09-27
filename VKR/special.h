#pragma once
#include <string>

using namespace System;
using namespace std;

double rad_in_deg(double rad);
double deg_in_rag(double deg);
void projection(double value, double corner_rad, double& pValue_x, double& pValue_y);
double priv_360(double deg);
double priv_2pi(double rad);
double priv_180(double deg);
double priv_pi(double rad);
double arcTan(double X1, double X2, double Y1, double Y2);
int sign(double value);
double arcTan2(double X, double Y);
void array_append
(double**& CalcVal, int& size, const int& row, double value1, double value2, double value3);
void showArr( double** Arr, const int row, const int size);
double  Sqr(double fArg);
void array_append2
(double**& CalcVal, int& size, const int& row, double value1, double value2);
void newArr2(double** Arr, int row, int col);
void showArr1(double* Arr, const int size);
double Gauss(double mo, double sigma);
void CovSt_XY(double* Cov, double** xi, double** yi, double* Xst, double* Yst, const int N, const int col);
void M_Exp(double* x_st, double** xi, const int N, const int col);
void Variance(double* VarX, double** xi, double* MoX, const int N, const int col);
void FileRec(double* Mas, const int col, string name);
void newArr3(double*** Arr, int size, int row, int col);
void newArr22(int** Arr, int row, int col);
void zeroMasInt(int** Arr, int row, int col);
void zeroMasInt1(int* Arr, int size);


/* Прототипы функций */
string& Convert_String_to_string(String^ s, string& os); // конвертируем System::string^ в std::string
char* Convert_String_to_char(String^ string);