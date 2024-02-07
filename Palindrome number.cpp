Question Link:- 
https://leetcode.com/problems/palindrome-number/


SOLUTION:-

#include <iostream>
#include <string>
#include <cctype>


class Solution {
public:
    bool isPalindrome(std::string s) {
        std::string cleanString;
        for (char c : s) {
            if (std::isalnum(c)) {
                cleanString += std::tolower(c);
            }
        }
        
        // Check if cleanString is a palindrome
        int left = 0, right = cleanString.length() - 1;
        while (left < right) {
            if (cleanString[left] != cleanString[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};

