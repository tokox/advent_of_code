#include <przydatne_funkcje.hpp>
#include <iostream>
#include <string>
#include <vector>
using namespace my;
int main()
{
	int n;
	cin >> n;
	vector<string> liczby;
	liczby.resize(n);
	for(int i = 0; i < n; i++)
		cin >> liczby[i];
	vector<string> tleny = liczby;
	for(int i = 0; tleny.size() != 1; i++) {
		int ile1 = 0, ile0 = 0;
		for(int j = 0; j < tleny.size(); j++) {
			if(tleny[j][i] == '1')
				ile1++;
			else
				ile0++;
		}
		for(int j = 0; j < tleny.size(); j++) {
			if(tleny[j][i] == '1' && ile1 >= ile0)
				continue;
			if(tleny[j][i] == '0' && ile1 < ile0)
				continue;
			tleny.erase(tleny.begin()+j);
			j--;
		}
	}
	vector<string> dwutlenki = liczby;
	for(int i = 0; dwutlenki.size() != 1; i++) {
		int ile1 = 0, ile0 = 0;
		for(int j = 0; j < dwutlenki.size(); j++) {
			if(dwutlenki[j][i] == '1')
				ile1++;
			else
				ile0++;
		}
		for(int j = 0; j < dwutlenki.size(); j++) {
			if(dwutlenki[j][i] == '1' && ile1 < ile0)
				continue;
			if(dwutlenki[j][i] == '0' && ile1 >= ile0)
				continue;
			dwutlenki.erase(dwutlenki.begin()+j);
			j--;
		}
	}
	cout << tleny[0] << ":" << systemy(2, tleny[0]) << " " << dwutlenki[0] << ":" << systemy(2, dwutlenki[0]) << " " << systemy(2, tleny[0])*systemy(2, dwutlenki[0]) << endl;
}