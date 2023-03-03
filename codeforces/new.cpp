#include <iostream>
using namespace std;

int n, h, arr, res = 0;

int main() {
    cin >> n >> h;
    for(int i = 0; i < n; i++) {
        cin >> arr;
        if(arr > h) {
            res++;
        }
        res++;
    }
    cout << res;
}