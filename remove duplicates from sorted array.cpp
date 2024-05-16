QUESTION LINK:- 
https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
   
  
SOLUTION:-

class Solution 
{
    public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        int i = 1; // Start from the second element
        for (int j = 1; j < nums.size(); ++j) {
            if (nums[j] != nums[j - 1]) { // Found a new unique element
                nums[i] = nums[j]; // Place it in the next position
                ++i; // Increment the position for the next unique element
            }
        }
        return i; // The length of the unique elements
    }
};
