#include <bits/stdc++.h>
using namespace std;

int main () {
	int n[5];
	int element;
    int floor;
	for(int i = 0; i < 5; i++) {
		cin >> n[i];
        if(n[i] >= 4) {
			element = n[i];
			break;
		}
	}
	
	for(int j = 0; j < 5; j++) {
		if(n[j] == element) {
            floor = j + 1;
            break;
        }
	}
	cout << floor << endl;
	
}
