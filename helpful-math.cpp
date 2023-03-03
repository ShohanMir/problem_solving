#include <bits/stdc++.h>

using namespace std;

int main() {
    string math;
    cin>>math;
    for (int i = 0; i < math.size() - 1; i++) {
        if (math[i] <= math[i + 1]) {
            cout << math[i];
        } else {
            cout << math[i] <= math[i + 1];
        }
    }
}
