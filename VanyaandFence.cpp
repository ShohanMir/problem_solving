#include <bits/stdc++.h>
using namespace std;

int n, h, arr, res = 0;

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	cin >> n >> h;
	for(int i=0; i<n; i++) {
		cin >> arr;
		if(arr > h) {
			res++;
		}
		res++;
	}
	cout << res;	
}
