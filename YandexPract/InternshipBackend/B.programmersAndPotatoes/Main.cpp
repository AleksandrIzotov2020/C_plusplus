#include <iostream>
#include <string>
#include <vector>

using namespace std;

void show_vector(vector<int>& a)
{
	for (vector<int>::iterator it = a.begin(); it != a.end(); ++it)
		cout << *it;
}

string stringToInt(string* Arr, int i, int& j) {
	if ((j + 1)== sizeof(Arr[i]) / sizeof(Arr) || Arr[i][j + 1] == ' ')
	{
		string k = "";
		return  Arr[i][j] + k;
	}
	else
	{
		string k = stringToInt(Arr, i, ++j);
		return k + Arr[i][j - 1];
		
	}
}

int main() {
	int numGroups, pancakes, i = 0, j = 0;				// pancakes - оладья, драники и т.п.
	cin >> numGroups;
	string* Groups = new string[numGroups];
	cin.ignore(32767, '\n');
	for (int i = 0; i < numGroups; i++)
	{
		getline(cin, Groups[i]);
	}
	cin >> pancakes;

	vector <int> allValues;
	for (int i = 0; i < numGroups; i++)
	{
		string len = stringToInt(Groups, i, j);
		int length = atoi(len.c_str());
		for (int k = 0; k < length; k++)
		{
			string val = stringToInt(Groups, i, ++j);
			int value = atoi(val.c_str());
			allValues.push_back(value);
		}
		j = 0;
	}

	show_vector(allValues);
	

	return 0;
}