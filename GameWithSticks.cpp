#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int n, m;
	cin >> n >> m;
	
	int k = min(n, m);
	
	if(k%2 == 0) {
		cout << "Malvika" << endl;
	} else {
		cout << "Akshat" << endl;
	}
	return 0;
}
