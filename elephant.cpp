#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	
	int x;
	cin>>x;
	int ans = 0;
	
	if(x%5 == 0) {
		ans = x/5;
	} else if(x%5!=0) {
		ans = x/5 + 1;
	} else {
		ans = 1;
	}
	cout << ans << endl;
	
	return 0;
}
