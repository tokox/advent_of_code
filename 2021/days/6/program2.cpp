#include <iostream>
#include <string>
using namespace std;
int main()
{
	long long ryby[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
	long long sum = 0;
	string pom;
	while(true) {
		char x = cin.get();
		if(x == ',') {
			ryby[stoi(pom)]++;
			sum++;
			pom = "";
		} else if(x == '\n') {
			ryby[stoi(pom)]++;
			sum++;
			pom = "";
			break;
		} else {
			pom += x;
		}
	}
	cout << "Initial state: " << flush;
	for(int i = 0; i < 9; i++)
		cout << ryby[i] << "  ";
	cout << endl;
	for(int i = 0; i < 256; i++) {
		long long pom = ryby[0];
		for(int j = 1; j < 9; j++)
			ryby[j-1] = ryby[j];
		ryby[8] = pom;
		ryby[6] += pom;
		sum += pom;
		cout << "After " << i+1 << " " << (i ? "days" : "day") << " (" << sum << "): \t";
		for(int j = 0; j < 9; j++)
			cout << ryby[j] << " \t";
		cout << endl;
	}
}
