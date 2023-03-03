#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int n, r;
	cin >> n;
	while(n--) {
		int p, q;
		cin >> p >> q;
		if(q-p >= 2) {
			r++;
		}
	}
	cout << r << endl;
	
	return 0;
}
