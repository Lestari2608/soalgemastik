#include <iostream>
using namespace std;

string next(string s) {
	for (int i=s.length()-1;i>=0; i--) {
		if (s[i]==')') {
			int j = i-1;
			while(s[j]==')') j--;
			// cout << i << " " << j << " " << s[j] << endl;
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

int main() {
	string s;
	cin >> s;
	while (s[0]!=')') {
		s = next(s);
		cout << s << endl;
	}
	return 0;
}