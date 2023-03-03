#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
		int n = nums.size();
		vector<pair<int>, int>> arr(n);
		for(int i = 0; i<n; i++) {
			arr[i] = make_pair(nums[i]. i);
		}
		sort(arr.begin(), arr.end());
		int left = 0, right = n - 1;
		while(left < right){
			
			int sum2 = arr[left].first + arr[right].first;
			if(sum2 = target) {
				return {arr[left].second, arr[right].second};
			}
			if(sum2 > target){
				right -= 1;
			}else {
				left += 1;
			}
		}
		return {};
	
	}
}
int main() {
	Solution n;
	n.twoSum([2,7,11,15], 9);
	return 0;
}
