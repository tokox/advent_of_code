#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	vector<long long> ryby;
	string pom;
	while(true) {
		char x = cin.get();
		if(x == ',') {
			ryby.push_back(stoi(pom));
			pom = "";
		} else if(x == '\n') {
			ryby.push_back(stoi(pom));
			pom = "";
			break;
		} else {
			pom += x;
		}
	}
	cout << "Initial state: " << flush;
	for(long long i = 0; i < ryby.size(); i++) {
		cout << ryby[i];
		if(i+1 < ryby.size())
			cout << ",";
		else
			cout << endl;
	}
	for(long long i = 0; i < 80; i++) {
		for(long long j = 0; j < ryby.size(); j++) {
			ryby[j]--;
			if(ryby[j] < 0) {
				ryby.push_back(9);
				ryby[j] = 6;
			}
		}
		cout << "After " << i+1 << " " << (i ? "days" : "day") << " (" << ryby.size() << "): ";
		for(long long j = 0; j < ryby.size() && j < 60; j++) {
			cout << ryby[j];
			if(j+1 == ryby.size())
				cout << endl;
			else if(j+1 == 60)
				cout << "..." << endl;
			else
				cout << ",";
		}
	}
}
