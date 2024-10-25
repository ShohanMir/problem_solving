#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(NULL);

    string borze;
    cin >> borze;
    vector<char> result;

    for (size_t i = 0; i < borze.length(); ) {
        if (borze[i] == '.') {
            result.push_back('0');
            i++;
        } else if (borze[i] == '-' && borze[i + 1] == '.') {
            result.push_back('1');
            i += 2;
        } else if (borze[i] == '-' && borze[i + 1] == '-') {
            result.push_back('2');
            i += 2;
        }
    }

    cout << string(result.begin(), result.end()) << '\n';

    return 0;
}
