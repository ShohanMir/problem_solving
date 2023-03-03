#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int n, t;
	cin >> n;
	string str;
	while(n--) {
		cin >> t;
		if(t == 1) {
			str = "HARD";
			break;
		} else {
			str = "EASY";
		}
	}
	
	cout << str << endl;
	return 0;
}
