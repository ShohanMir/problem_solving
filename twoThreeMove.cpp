#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	ll t;
	cin>>t;
	
	while(t--) {
		ll n;
		cin>>n;
		
		if (n==1) {
			cout << 2 << endl;
			continue;
		}
		
		if (n%3==0) {
			cout<<n/3<<endl;
		}
		if (n%3!=0) {
			cout<<n/3+1<<endl;
		}
	}
	
	return 0;
};
