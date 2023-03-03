#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	 vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
			int evenSum = 0;
			 for(auto x : nums) {
				 if(x % 2 == 0) {
					 evenSum += x;
				 }
			 }
	 
			 vector<int> ans;
			 for(auto q : queries) {
				 int val = q[0], idx = q[1];
				 if(nums[idx] % 2 == 0) evenSum -= nums[idx];
				 
				 nums[idx] += val;
				 if(nums[idx] % 2 == 0) evenSum += nums[idx];
				 
				 ans.push_back(evenSum);
		}
		
		return ans;
	}
	 
};

int main() {
	Solution s;
	int nums[] = [1,2,3,4];
	int queries[] = [[1,0],[-3,1],[-4,0],[2,3]];
	
	s.sumEvenAfterQueries(nums, queries);
	return 0;
}
