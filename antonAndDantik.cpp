#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	string s;
	cin >> n>> s;
	int a = 0, b = 0;
	for (int i=0; i<n;i++) {
		if(s[i] == 'A'){
			a+= 1;
		} else {
			b+=1;
		}
	}
	if(a > b) {
		cout<<"Anton"<<endl;
	}else if (a < b) {
		cout<<"Danik"<<endl;
	} else {
		cout<<"Friendship"<<endl;
	}
}
