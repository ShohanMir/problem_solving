#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int n, room = 0;
	cin >> n;
	while(n--) {
		int p, q;
		cin >> p >> q;
		if(p == q) {
			room += 0;
		} else {
			room++;
		}
	
	}
	cout<<room<<endl;
}
