#include <przydatne_funkcje.hpp>
using namespace my;
int main()
{
	long long n, s;
	cin >> n >> s;
	long long ile[s];
	for(int i = 0; i < s; i++)
		ile[i] = 0;
	for(int i = 0; i < n; i++) {
		string liczba;
		cin >> liczba;
		if(liczba.size() < s) {
			cerr << "ERROR" << endl;
			continue;
		}
		for(int i = 0; i < s; i++) {
			if(liczba[i] == '0')
				ile[i]--;
			else if(liczba[i] == '1')
				ile[i]++;
			else
				cerr << "ERROR" << endl;
		}
	}
	std::string gamma, epsilon;
	for(int i = 0; i < s; i++) {
		if(ile[i] < 0) {
			gamma += "0";
			epsilon += "1";
		} else if(ile[i] > 0) {
			gamma += "1";
			epsilon += "0";
		} else
			cerr << "ERROR" << endl;
	}
	cout << gamma << ":" << systemy(2, gamma) << " " << epsilon << ":" << systemy(2, epsilon) << " " << systemy(2, gamma)*systemy(2, epsilon) << endl;
}
