#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,t;
	cin>>n>>t;
	string s;
	cin>>s;
	
	while(t--) {
		for(int i=0;i<n;i++) {
			if(s[i] == 'B' && s[i+1] == 'G') {
				s[i] = 'G';
				s[i+1] = 'B';
				i++;
			}
		}
	}
	cout<<s<<endl;
	return 0;
}
