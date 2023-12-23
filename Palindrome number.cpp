Question Link:- 
https://leetcode.com/problems/palindrome-number/


SOLUTION:-

class Solution {
public:
    bool isPalindrome(int x) {
        // Special cases:
        // If x is negative or ends with 0 but is not 0, it can't be a palindrome.
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int reversed = 0;
        while (x > reversed) {
            int digit = x % 10;
            reversed = reversed * 10 + digit;
            x /= 10;
        }

        // For even-length numbers, x will equal reversed.
        // For odd-length numbers, x will be the middle digit, so we need to remove it.
        return x == reversed || x == reversed / 10;
    }
};
