#include <iostream>
#include <fstream>
#include <string>


using namespace std;
using namespace System;


void NewFile(std::string way, std::string name)
{
	string NAME = name.c_str();
	ofstream fout;
	fout.open(way.c_str() + NAME);
	fout.close();
}

void Value_to_file(std::string way, std::string name, int value)
{
	string NAME = name.c_str();
	ofstream fout;
	fout.open(way.c_str() + NAME, ofstream::app);
	if (fout.is_open())
	{
		fout << value << endl;
	}
	else
	{
		return;
	}
	fout.close();
}

double ReadingFile(std::string way, std::string name, const int num)
{
	int i = 0;
	double value = 0;
	string NAME = name.c_str(), str;
	ifstream fin;
	fin.open(way.c_str() + NAME);
	if (fin.is_open())
	{
		while (!fin.eof() && i != num)
		{
			fin >> str;
			value = atoi(str.c_str());
			i++;
		}
		
		
		return value;
	}
	else
	{
		return 0;
	}
	fin.close();
}

string ReadingFile_to_str(std::string way, std::string name)
{
	int i = 0;
	string NAME = name.c_str(), str, sum;
	ifstream fin;
	fin.open(way.c_str() + NAME);
	if (fin.is_open())
	{
		while (!fin.eof())
		{
			str = "";
			fin >> str;
			sum += str + " || ";
		}


		return sum;
	}
	else
	{
		return 0;
	}
	fin.close();
}


void ClearFile(std::string way, std::string name)
{
	string NAME = name.c_str(), str;
	ofstream fout;
	fout.open(way.c_str() + NAME);
	if (fout.is_open())
	{
		fout.clear();
	}
	fout.close();
}

void REDFileMas(std::string way, std::string name, int **Mas, int row, int col)
{
	string NAME = name.c_str(), str;
	ofstream fout;
	fout.open(way.c_str() + NAME, ofstream::app);
	if (fout.is_open())
	{
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				fout << Mas[i][j] << "\t";
			}
			fout << endl;
		}
	}
	fout.close();
}

void REDFileMas1(std::string way, std::string name, int* Mas, int size)
{
	string NAME = name.c_str(), str;
	ofstream fout;
	fout.open(way.c_str() + NAME, ofstream::app);
	if (fout.is_open())
	{
		for (int i = 0; i < size; i++)
		{
			fout << Mas[i] << "\t";
		}
	}
	fout.close();
}