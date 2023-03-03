#include <bits/stdc++.h>
using namespace std; 


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
		int count = 0;
        for(int i = 0; i < nums.length(); i++) {
			if(nums[i] == nums[i+1]){
				nums[i+1] = '_';
			}
			count++;
		}
		cout << count << "nums = " nums << endl;
	}
};

int main() {
	Solution s;
	int num[] = {0,0,1,1,1,2,2,3,3,4};
	s.removeDuplicates(num);
	return 0;
};
