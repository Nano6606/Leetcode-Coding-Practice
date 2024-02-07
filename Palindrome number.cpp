Question Link:- 
https://leetcode.com/problems/palindrome-number/


SOLUTION:-

#include <iostream>
#include <string>
#include <cctype>

class Solution {
public:
    bool isPalindrome(std::string s) {
        int left = 0, right = s.length() - 1;
        while (left < right) {
            while (left < right && !std::isalnum(s[left])) {
                left++;
            }
            while (left < right && !std::isalnum(s[right])) {
                right--;
            }
            char leftChar = std::tolower(s[left]);
            char rightChar = std::tolower(s[right]);
            if (leftChar != rightChar) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};


