#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	int count = 0;
	int length = s.size();
	for (int i = 0; i < length; i++){
		if(s[i]=='4' || s[i] == '7') {
			count++;
		}
	}
	if(count == 4 || count == 7) {
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}
	return 0;
} 
