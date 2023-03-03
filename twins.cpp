#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int n, sum, count, ans;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	
	sum = sum / 2;
	sort(arr, arr+n);
	count = 0;
	ans = 0;
	for(int i = n-1; i >= 0; i--) {
		ans += arr[i];
		count++;
		if(ans > sum){
			break;
		}
	}
	cout << count;
	
	return 0;
}
