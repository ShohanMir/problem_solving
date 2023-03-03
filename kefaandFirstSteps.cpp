#include <bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL));
using namespace std;

int main() {
	fastread();
	int n, a, l(1), ml(1);
	cin>>n;

	vector< int > arr;

	for(int i = 0; i<n; i++) {
		cin >> a;
		arr.push_back(a);
		if(i > 0){
			if(arr[i] >= arr[i-1]){
				l++;
				ml = max(ml, l);
			} else {
				l = 1;
			}
		}
	}	
	cout << ml << endl;
	return 0;
}
