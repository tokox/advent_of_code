#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	string pom;
	vector<int> pos;
	while(true) {
		char x = cin.get();
		if(x == ',') {
			pos.push_back(stoi(pom));
			pom = "";
		} else if(x == '\n') {
			pos.push_back(stoi(pom));
			pom = "";
			break;
		} else {
			pom += x;
		}
	}
	sort(pos.begin(), pos.end());
	int srodek = pos[pos.size()/2];
	int fuel = 0;
	for(int i = 0; i < pos.size(); i++)
		fuel += abs(srodek-pos[i]);
	cout << fuel << endl;
}
