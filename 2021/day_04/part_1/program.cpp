#include <iostream>
#include <vector>
using namespace std;
class Board {
	public:
		Board() {
			for(int i = 0; i < 5; i++)
				for(int j = 0; j < 5; j++)
					choosen[i][j] = false;
			win = false;
		}
		void setfields(int Fields[5][5]) {
			for(int i = 0; i < 5; i++) {
				for(int j = 0; j < 5; j++) {
					fields[i][j] = Fields[i][j];
				}
			}
		}
		void choose(int number) {
			for(int i = 0; i < 5; i++) {
				for(int j = 0; j < 5; j++) {
					if(fields[i][j] == number) {
						choosen[i][j] = true;
						bool xwin = true;
						for(int k = 0; k < 5; k++) {
							if(!choosen[i][k])
								xwin = false;
						}
						if(xwin)
							win = true;
						xwin = true;
						for(int k = 0; k < 5; k++) {
							if(!choosen[k][j])
								xwin = false;
						}
						if(xwin)
							win = true;
					}
				}
			}
			end = number;
		}
		bool winner() {
			return win;
		}
		int points() {
			if(winner()) {
				int sum = 0;
				for(int i = 0; i < 5; i++)
					for(int j = 0; j < 5; j++)
						if(!choosen[i][j])
							sum += fields[i][j];
				return sum*end;
			}
			return 0;
		}
	private:
		int fields[5][5];
		bool choosen[5][5];
		int end;
		bool win;
};
int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> liczby;
	string pom;
	for(int i = 0; i < m-1; i++) {
		getline(cin, pom, ',');
		liczby.push_back(std::stoi(pom));
	}
	getline(cin, pom, '\n');
	liczby.push_back(std::stoi(pom));
	Board boards[n];
	for(int i = 0; i < n; i++) {
		int liczbytablicy[5][5];
		for(int j = 0; j < 5; j++)
			for(int k = 0; k < 5; k++)
				cin >> liczbytablicy[j][k];
		boards[i].setfields(liczbytablicy);
	}
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			boards[j].choose(liczby[i]);
			if(boards[j].winner()) {
				cout << boards[j].points() << endl;
				return 0;
			}
		}
	}
}
