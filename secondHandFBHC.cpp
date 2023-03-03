#include <bits/stdc++.h>
using namespace std;

int solve(){
	//vector<int> S;
	int N, K;
	cin>>N>>K;
	double a;
	int S[N];
	for(int i = 0; i<N; i++){	
		cin>>S[i];
	}
	a = N/K;
	if(a+a == N) {
		cout<<"NO"<<endl;
	}else {
		cout<<"YES"<<endl;
	}
	return 0;
}

int main() {
	int T;
	cin>>T;
	while(T--) {
		solve();
	}
	return 0;
}
