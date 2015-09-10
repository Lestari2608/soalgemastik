#include <iostream>

using namespace std;

#define REP(i,n) for (int i = 0; i < (int)n; i++)
#define FOR(i, a, b) for (int i = (int)a; i <= (int)b; i++)

void solution(string kar) {
	string s = "";
	REP (i, kar.length()) {
		s += kar[i];
		if (kar.length() >= 3)
		{
			if (kar[(i+2)] == ')' && i < kar.length()-2) {
				s += kar[(i+2)];
				s += kar[(i+1)];
				// cout << s << endl;
				i += 2;
			} else if (kar[(i+2)] == '(' && kar[(i+3)] == ')' && i < kar.length()-3) {
				s += kar[(i+3)];
				s += kar[(i+2)];
				// cout << s << endl;
				i += 3;
			}
		}
	}

	if (kar != s) {
		cout << s << endl;
	} else {
		cout << "TIDAK ADA" << endl;
	}
}

int main(int argc, char *argv[])
{
	int nKasus;
	string kar;

	cin >> nKasus;
	REP(i, nKasus) {
		cin >> kar;
		solution(kar);
	}
	
	return 0;
}