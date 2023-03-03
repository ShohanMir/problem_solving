#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	int a, b;
	int sum = 0, k = 0;
	for(int i = 0; i<n; i++) {
		cin>>a>>b;
		sum = (a+k) - b;
		if(sum < 0)
			k = 0;
		else
			k = sum;
		}
	cout << sum;
	return 0;
}
