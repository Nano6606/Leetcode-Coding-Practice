QUESTION LINK:-
https://leetcode.com/problems/rotate-array/description/


SOLUTION:-

class Solution 
{
    public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // Normalize k
        if (k == 0) return; // No need to rotate if k is 0
        
        reverse(nums.begin(), nums.end()); // Step 1: Reverse the entire array
        reverse(nums.begin(), nums.begin() + k); // Step 2: Reverse the first k elements
        reverse(nums.begin() + k, nums.end()); // Step 3: Reverse the remaining n - k elements
    }
};
