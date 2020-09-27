#include <iostream>
#include <string>

using namespace std;

void coder(string decodNum, string* encodNum, const int length) {
	int j = decodNum.size();
	int k = length;
	for (int i = 0; i < length; i++)
	{
		if (decodNum[0] == '-' && i == 0) i++;
		encodNum[i] = decodNum[--k];
	}
}

int recurs(string decodNum, int length) {

	char t = decodNum[length];
	if (decodNum[length - 1] != '0' && (length) > 0)
	{
		return length;
	}
	else
	{
		length--;
		return length = recurs(decodNum, length);
	}
	
}

int main(){

	string decodedNum;
	string* encodedNum;
	getline(cin, decodedNum);	
	int len = decodedNum.size();
	if (decodedNum.size() == 1 && decodedNum[0] == '0')
	{
		char out = decodedNum[0];
		cout << out << endl;
	}
	else
	{
		len = recurs(decodedNum, len);
		encodedNum = new string[len];
		if (decodedNum[0] == '-') encodedNum[0] = decodedNum[0];

		coder(decodedNum, encodedNum, len);
		for (int i = 0; i < len; i++) cout << encodedNum[i];

		delete[] encodedNum;
	}
	return 0;
}