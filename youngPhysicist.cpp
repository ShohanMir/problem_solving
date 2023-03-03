#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	int x,y,z;
	int sumX=0,sumY=0,sumZ=0;
	while(n--){
		cin>>x>>y>>z;
		sumX+= x;
		sumY+= y;
		sumZ+= z;
	}
		
	if (sumX == 0 && sumY ==0 &&sumZ==0) {
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	return 0;
}
