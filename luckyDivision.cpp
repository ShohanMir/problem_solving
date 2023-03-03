#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int arr[14] = {4, 7, 44, 77, 47, 74, 444, 447, 474, 744, 777, 774, 747, 477};
    bool flag = false;
    for(int i = 0; i < 14; i++) {
        if(n % arr[i] == 0) {
            flag = true;
        }
    }
    if(flag) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
