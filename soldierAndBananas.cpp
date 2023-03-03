#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int k,n,w;
	cin>>k>>n>>w;
	int cost;
	
	for (int i=1; i<=w; i++) {
		cost+= k * i;
	}
	if(cost > n) {
		cout<<cost-n<<endl;
	} else {
		cout<<0<<endl;
	}
	return 0;
}
