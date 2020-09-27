#pragma once
#include <string>
using namespace std;

void NewFile(std::string way, std::string name);
void Value_to_file(std::string way, std::string name, int value);
double ReadingFile(std::string way, std::string name, const int num);
void ClearFile(std::string way, std::string name);
void REDFileMas(std::string way, std::string name, int** Mas, int row, int col);
void REDFileMas1(std::string way, std::string name, int* Mas, int size);
string ReadingFile_to_str(std::string way, std::string name);