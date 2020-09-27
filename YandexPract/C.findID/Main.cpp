#include <iostream>
#include <string>
#include <vector>

using namespace std;


int val = 0;

string recursion(string idUsers, int& low, int& val) {
	
	if (low == idUsers.size() || idUsers[low + 1] == ' ')
	{
		string k = "";
		return k += idUsers[low];
	}
	else {
		string k = recursion(idUsers, ++low, val);
		string result = idUsers[low + --val] + k;
		return result;
	}
}

int searchID(int* arr, int i) {
	if (i < sizeof(arr)/sizeof(int) || arr[i - 1] != i) return i;
	else return searchID(arr, ++i);
}


int main() {

	setlocale(LC_ALL, "Rus");

	int numUsers, k = 0;
	string idUsers;
	vector <string> vectorID, sortID;
 
	cin >> numUsers;
	cin.ignore(32767, '\n');
	getline(cin, idUsers);
	for (int i = 0; i < idUsers.size(); i++)
	{
		if (idUsers[i] != ' ')
		{
			val = 0;
			string num = recursion(idUsers, i, val);
			vectorID.push_back(num);
		}
	}
	int* arraySort = new int[numUsers];
	for (int j = 0; j < vectorID.size(); j++)
	{
		int i = atoi(vectorID.at(j).c_str());
		arraySort[i - 1] = i;
	}
	int a = searchID(arraySort, 1);
	int b = searchID(arraySort, a + 1);
	cout << a << " " << b << endl;
	
	delete[]  arraySort;
	return 0;
}