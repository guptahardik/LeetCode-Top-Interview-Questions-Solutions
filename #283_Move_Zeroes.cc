/*
Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Example:

Input: [0,1,0,3,12]
Output: [1,3,12,0,0]
Note:

You must do this in-place without making a copy of the array.
Minimize the total number of operations.

Solution Details:
Runtime: 28 ms, faster than 9.88% of C++ online submissions for Move Zeroes.
Memory Usage: 9.5 MB, less than 79.17% of C++ online submissions for Move Zeroes.
*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector <int> indexZ;
        for(int i = 0; i< nums.size(); i++){
            if (nums[i] == 0){
                indexZ.push_back(i);
            }
        }
        int a = 0;
        for(int j = 0; j<indexZ.size();  j++){
            for(int z = indexZ[j]-a; z<nums.size(); z++){
               if(z ==  nums.size()-1){
                   nums[z]  = 0;
               } else{
               nums[z]= nums[z+1];
               }
            }
            a++;
            //nums[nums.size()-1] = 0;
        }
    }
};
