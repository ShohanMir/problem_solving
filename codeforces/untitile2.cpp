#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, num = 5, floor = 0;
    while(n--) {
        cin >> n;
        floor++;
        if(n >= 4) {
            cout << floor;
            break;
        }
    }
}