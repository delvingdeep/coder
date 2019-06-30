/*
Problem Statement:
    Given an array of integers, return indices of the two numbers such that they add up to a specific target.
*/

/* ---- Solution code ----- */
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> result = {};
        
        // outer loop
        for(int i=0; i < nums.size()-1; i++) {
            
            // inner loop
            for(int j=0; j < nums.size(); j++) {
                if(nums[i]+nums[j] == target && (i != j)) {
                    result = {i, j};
                
                    return result;
                }
            }
        }
        return result;
    }
};