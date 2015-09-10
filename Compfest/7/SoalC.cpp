#include <iostream>
#include <string>

using namespace std;

#define REP(i,n) for (int i = 0; i < (int)n; i++)
#define FOR(i, a, b) for (int i = (int)a; i <= (int)b; i++)
#define MAX 1000000

// void makeKurung(string kar, int pasang, int data[MAX]) {
// 	// cout << pasang << " + " << data[(pasang-1)] << endl;
// 	if (pasang == 1 && data[(pasang-1)] == (kar.length()/2)-1) {
// 		cout << "("; REP(i, ((kar.length()/2)-1)) cout << "()"; cout << ")";
// 	} else if (pasang == (kar.length()/2)-1 && kar[0] == '(' && kar[(kar.length()-1)] == ')') {
// 		cout << "(())"; REP(i, ((kar.length()/2)-2)) cout << "()";
// 	} else if (pasang == (kar.length()/2)-2 && kar[data[(pasang-1)]] {
// 		REP(i, (kar.length()/2)) cout << "()";
// 	} else if (pasang == kar.length()/2) {
// 		cout << "TIDAK ADA";
// 	}
// 	cout << endl;
// }

// void solution(string kar) {
// 	int n = 0, pasang = 0;
// 	int data[MAX];
// 	bool t = true;
// 	if (kar.length() <= 2) {
// 		cout << "TIDAK ADA" << endl;
// 	} else {
// 		REP(i, kar.length()) {
// 			if (kar[i] == '(' && kar[(i+1)] == ')' && i != kar.length()-1) {
// 				pasang++; data[n] = i; i++; n++;
// 			}
// 			if (pasang >= 1 && kar[(i+2)] == '(') break;
// 		}
// 		makeKurung(kar, pasang, data);
// 	}
// }
string next(string s) {
	for (int i=s.length()-1;i>=0; i--) {
		if (s[i]==')') {
			int j = i-1;
			while(s[j]==')') j--;
			cout << i << " " << j << " " << s[j] << endl;
			s[j] = ')';
			for (int k=j+1; k<=i; k++) {
				s[k] = '(';
			}
			return s;
		} else {
			s[i] = ')';
			return s;
		}
	}
}

int main(int argc, char *argv[]) {
	int nKasus;
	string kar;

	cin >> nKasus;
	REP(i, nKasus) {
		cin >> kar;
		solution(kar);
	}
	return 0;
}