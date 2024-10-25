#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int t;
    cin >> t;
    vector<string> results;
    results.reserve(t);

    for (int i = 0; i < t; i++) {
        int rating;
        cin >> rating;

        if (rating >= 1900) {
            results.push_back("Division 1");
        } else if (rating >= 1600) {
            results.push_back("Division 2");
        } else if (rating >= 1400) {
            results.push_back("Division 3");
        } else {
            results.push_back("Division 4");
        }
    }

    for (const string& result : results) {
        cout << result << '\n';
    }

    return 0;
}