#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	string pom;
	vector<int> pos;
	int sum = 0;
	while(true) {
		char x = cin.get();
		if(x == ',') {
			pos.push_back(stoi(pom));
			sum += stoi(pom);
			pom = "";
		} else if(x == '\n') {
			pos.push_back(stoi(pom));
			sum += stoi(pom);
			pom = "";
			break;
		} else {
			pom += x;
		}
	}
	sort(pos.begin(), pos.end());
	int average = floor(sum/(double)pos.size());
	int fuel = 0;
	for(int i = 0; i < pos.size(); i++) {
		int crabFuel = 0;
		for(int j = 1; j <= abs(average-pos[i]); j++)
			crabFuel += j;
		fuel += crabFuel;
	}
	cout << fuel << endl;
}
