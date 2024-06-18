QUESTION LINK:-
https://www.naukri.com/code360/problems/sum-of-two-arrays_893186?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_4&leftPanelTabValue=PROBLEM

Sample Input 1:
2
4 1 
1 2 3 4
6
3 2
1 2 3
9 9    
Sample Output 1:
1 2 4 0
2 2 2
Explanation For Sample Input 1:
For the first test case, the integer represented by the first array is 1234 and the second array is 6, so the sum is 1234 + 6 =  1240.

For the second test case, the integer represented by the first array is 123 and the second array is 99, so the sum is 123 + 99 = 222.


SOLUTION:-

#include <bits/stdc++.h> 
using namespace std;

vector<int> findArraySum(vector<int>& a, int n, vector<int>& b, int m) {
    int i = n - 1, j = m - 1;
    int carry = 0;
    vector<int> result;

    while (i >= 0 || j >= 0 || carry > 0) {
        int sum = carry;
        if (i >= 0) {
            sum += a[i];
            i--;
        }
        if (j >= 0) {
            sum += b[j];
            j--;
        }
        carry = sum / 10;
        sum = sum % 10;
        result.insert(result.begin(), sum);
    }

    return result;
}
