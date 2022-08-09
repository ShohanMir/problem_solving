#include <iostream>
#include <string>

using namespace std;

// Longest substring

class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            int n = s.length();
            int ans = 0;
            int i = 0, j = 0;
            int map[256] = {0};
            while (i < n && j < n) {
                if (map[s[j]] == 0) {
                    map[s[j]] = 1;
                    j++;
                    ans = max(ans, j - i);
                } else {
                    map[s[i]] = 0;
                    i++;
                }
            }
            return ans;
        }
};

// driver function

int main() {
    string s;
    cin >> s;
    Solution obj;
    cout << obj.lengthOfLongestSubstring(s);
    return 0;
}
