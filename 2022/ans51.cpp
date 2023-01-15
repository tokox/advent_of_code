#include <iostream>
#include <stack>
using namespace std;
int main()
{
	int n;
	cin >> n;
	stack<char> s[n];
	for(int i = 0; i < n; i++) {
		int m;
		cin >> m;
		for(int j = 0; j < m; j++) {
			char c;
			cin >> c;
			s[i].push(c);
		}
	}
	string str;
	int a, f, t;
	while(cin >> str >> a >> str >> f >> str >> t) {
		while(a--) {
			s[t-1].push(s[f-1].top());
			s[f-1].pop();
		}
	}
	for(int i = 0; i < n; i++)
		cout << s[i].top();
	cout << endl;
}
