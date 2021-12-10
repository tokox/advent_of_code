#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int tab[n];
	for(int i = 0; i < n; i++)
		cin >> tab[i];
	int licznik = 0;
	for(int i = 0; i < n-3; i++) {
		int pop_sum = tab[i]+tab[i+1]+tab[i+2];
		int sum = tab[i+1]+tab[i+2]+tab[i+3];
		if(sum > pop_sum)
			licznik++;
	}
	cout << licznik << endl;
}
