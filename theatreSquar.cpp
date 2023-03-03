#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	double n, m, a;
	cin>>n>>m>>a;
	long long x, y;
	x = ceil(n/a);
	y = ceil(m/a);
	cout<< x*y << endl;
}
