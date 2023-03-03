#include <bits/stdc++.h>
using namespace std;

string checkIt(string &s){
	int count = 0;
	int length = s.length();
	for(int i = 0; i<length; i++) {
		if(s[i] == s[i+1]) {
			count++;
			if(count == 6){
				return "YES";
				break;
			}
		} else {
			count = 0;
		}
	}
	return "NO";
}

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	string s;
	cin>>s;
	string result = checkIt(s);
	cout<<result<<endl;
	return 0;
}
