#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t;
	cin >> t;
	
	while(t--) {
		int n;
		cin >> n;
		int p = n/2;
		int q = n;
		if(n%2 == 1) p = p + 1;
		
		while(p > 0) {
			cout << p << " ";
			p--;
			if(p == 0) break;
			cout << q << " ";
			q--;
		}
		if(n%2 == 0) cout << q << endl;
	}
	
	return 0;
}
