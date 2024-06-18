Question Link:-
https://leetcode.com/problems/minimum-increment-to-make-array-unique/description/

Input: nums = [3,2,1,2,1,7]
Output: 6
Explanation: After 6 moves, the array could be [3, 4, 1, 2, 5, 7].
It can be shown with 5 or less moves that it is impossible for the array to have all unique values.


SOLUTION:-

class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        
        sort(nums.begin(), nums.end());
        int result = 0;
        int lastNum = nums[0];
        
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] <= lastNum) {
                result += lastNum + 1 - nums[i];
                lastNum = lastNum + 1;
            } else {
                lastNum = nums[i];
            }
        }
        
        return result;
    }
};
