#include <iostream>
using namespace std;

string a, b = "hello";
int j = 0;

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	cin >> a;
	for(size_t i = 0; i < a.size(); i++) {
		if(a[i] == b[j]){
			j++;
					
			if(j == 5) {
				break;
			}
		}
	}
	if(j == 5) {
		cout << "YES";
	} else {
		cout << "NO";
	}
}
