#include <bits/stdc++.h>
#include <string.h>
using namespace std;


int main() {
	string s, t;
	cin >> s >> t;
	
	int N = strlen(s.c_str());
	
	for (int i = 0; i < N: i++) {
		if(s[i] == t[i]) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	};
	
	return 0;
};
