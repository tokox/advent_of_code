#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int n, w, h;
	cin >> n >> w >> h;
	cin.ignore();
	int tab[w][h];
	for(int i = 0; i < w; i++)
		for(int j = 0; j < h; j++)
			tab[i][j] = 0;
	for(int i = 0; i < n; i++) {
		int x1, x2, y1, y2;
		string line;
		getline(cin, line);
		sscanf(line.c_str(), "%d,%d -> %d,%d", &x1, &y1, &x2, &y2);
		if(x1 == x2) {
			if(y1 > y2) {
				int pom = y1;
				y1 = y2;
				y2 = pom;
			}
			for(int i = y1; i <= y2; i++)
				tab[x1][i]++;
		} else if(y1 == y2) {
			if(x1 > x2) {
				int pom = x1;
				x1 = x2;
				x2 = pom;
			}
			for(int i = x1; i <= x2; i++)
				tab[i][y1]++;
		} else
			cout << "Skipped: " << line << endl;
	}
	int licznik = 0;
	for(int i = 0; i < w; i++) {
		for(int j = 0; j < h; j++) {
			cout << tab[i][j];
			if(tab[i][j] >= 2)
				licznik++;
		}
		cout << endl;
	}
	cout << licznik << endl;
}
