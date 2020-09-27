#include <iostream>
#include <string>


using namespace std;



string* sortPlaylist(const int LEN, string* firstP, string* secondP) {
	string* finalPlaylist = new string[2 * LEN];
	int j = 0, k = 0;
	for (int i = 0; i < 2 * LEN; i++)
	{
		if (i == 0 || i % 2 == 0) finalPlaylist[i] = firstP[j++];
		else finalPlaylist[i] = secondP[k++];
	}

	return finalPlaylist;
	delete[] finalPlaylist;
}

int disp(string* arrey, const int LEN) {
	for (int i = 0; i < LEN; i++)
	{
		cout << arrey[i] << " ";
	}
	return 0;
}

void refact(string str, string* Playlist, int len) {
	int i = 0, k = 0, low = 0, top = 0;;
	for (int j = 0; j < len; j++)
	{
		low = i;
		while (str[i] != ' ') {
			i++;
			if (i == str.size())
			{
				break;
			}

		}
		int LEN = i - k;
		top = i;
		if (str[i] == ' ' || i == str.size())
		{
			string* value = new string[LEN];
			k = ++i;
			if (j == 0)
			{
				for (int h = 0; h < LEN; h++)
				{
					value[h] = str[h];
					Playlist[j] += value[h];
				}
			}
			else
			{
				int t = 0;
				for (int h = low; h < top; h++)
				{
					value[t] = str[h];
					Playlist[j] += value[t++];
				}
			}

			delete[] value;
		}
	}

}

int main() {

	string idRUS, idEUR;
	int LEN_PLAYLIST;											// Длина обоих плейлистов.
	cin >> LEN_PLAYLIST;
	cin.ignore(32767, '\n');
	getline(cin, idRUS);
	getline(cin, idEUR);

	string* firstPlaylist = new string[LEN_PLAYLIST];			// Плейлист российских исполнителей.
	string* secondPlaylist = new string[LEN_PLAYLIST];				// Плейлист иностранных исполнителей.

	refact(idRUS, firstPlaylist, LEN_PLAYLIST);
	refact(idEUR, secondPlaylist, LEN_PLAYLIST);

	string* final = sortPlaylist(LEN_PLAYLIST, firstPlaylist, secondPlaylist);
	disp(final, 2 * LEN_PLAYLIST);
	delete[] firstPlaylist, secondPlaylist;
	return 0;
}