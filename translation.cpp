#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	string t,s;
	cin >>t>>s;
	reverse(t.begin(), t.end());
	if(s == t) {
		cout<<"YES"<<endl;
	} else {
		cout<<"NO"<<endl;
	}
	return 0;	
}
