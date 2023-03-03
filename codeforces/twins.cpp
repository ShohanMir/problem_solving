#include <iostream>
using namespace std;

int main() {
    int n, c, res;
    cin >> n;
    while (n--) {
        cin >> c;
        if(n < 2) {
            res = n;
        } else {
            res = n - 1; 
        }
    }
    cout << res << endl;
}