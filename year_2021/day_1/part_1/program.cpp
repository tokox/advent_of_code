#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int pop_number;
	cin >> pop_number;
	int licznik = 0;
	for(int i = 1; i < n; i++) {
		int number;
		cin >> number;
		if(number > pop_number)
			licznik++;
		pop_number = number;
	}
	cout << licznik << endl;
}
