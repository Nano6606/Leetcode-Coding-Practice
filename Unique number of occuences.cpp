QUESTION LINK:-
  https://leetcode.com/problems/unique-number-of-occurrences/description/
  
SOLUTION:-
  #include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freqMap;
        for (int num : arr) {
            freqMap[num]++;
        }

        unordered_set<int> occurrenceSet;
        for (const auto& pair : freqMap) {
            if (occurrenceSet.find(pair.second) != occurrenceSet.end()) {
                return false;
            }
            occurrenceSet.insert(pair.second);
        }

        return true;
    }
};
