#include <iostream>
using namespace std;
int main()
{
	long long n;
	cin >> n;
	long long glebokosc = 0, ile_przeplynal = 0;
	for(long long i = 0; i < n; i++) {
		string gdzie;
		long long ile;
		cin >> gdzie >> ile;
		if(gdzie == "forward")
			ile_przeplynal += ile;
		else if(gdzie == "up")
			glebokosc -= ile;
		else if(gdzie == "down")
			glebokosc += ile;
		else
			cout << "ERROR" << endl;
	}
	cout << glebokosc << " " << ile_przeplynal << " " << glebokosc*ile_przeplynal << endl;
}
