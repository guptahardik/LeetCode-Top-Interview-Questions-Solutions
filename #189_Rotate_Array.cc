/*
Challenge of Problem: Solve with O(1) extra space.
Given an array, rotate the array to the right by k steps, where k is non-negative.

Example 1:

Input: [1,2,3,4,5,6,7] and k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
Example 2:

Input: [-1,-100,3,99] and k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]

Solution Details:

Runtime: 16 ms, faster than 86.20% of C++ online submissions for Rotate Array.
Memory Usage: 9 MB, less than 100.00% of C++ online submissions for Rotate Array.


*/


class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size() < k){
            k = k -nums.size();
        }
        int h = k;
        
        
        if(!(nums.size() == k)){
             vector <int> digits;
        int n = k-1;
        while(k != 0){
            digits.push_back(nums[(nums.size()-1)-n]);
            n--;
            k--;
        }
        vector<int> withOutK;
        k = h;
        for(int i = 0; i<=nums.size()-k-1; i++){
            withOutK.push_back(nums[i]);
        }
        digits.insert(digits.end(),withOutK.begin(),withOutK.end());
        nums = digits;
        }
        
        
        
        
        
