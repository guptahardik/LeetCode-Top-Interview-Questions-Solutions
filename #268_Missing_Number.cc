/*

Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.

Example 1:

Input: [3,0,1]
Output: 2
Example 2:

Input: [9,6,4,2,3,5,7,0,1]
Output: 8

Solution Details:
Runtime: 72 ms, faster than 6.70% of C++ online submissions for Missing Number.
Memory Usage: 16.9 MB, less than 5.88% of C++ online submissions for Missing Number.
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        map<int,bool> dataS;
        bool found = true;
        int highestNum = nums[0];
        for(int i = 0; i<nums.size(); i++){
           // dataS[nums[i]] = true;
            if(highestNum < nums[i]){
                highestNum = nums[i];
            }
        }
        // for(int z = 0; z<= highestNum; z++){
        //     if(dataS.find(z) == dataS.end()){
        //         found = false;
        //         return z;
        //     }
        // }
        
        
        // if(found){
        //     return highestNum +1;
        // }
        
        for(int z = 0; z<= highestNum; z++){
            dataS[z] = false;
        }
        for(int p = 0; p < nums.size(); p++){
            dataS[nums[p]] = true;
        }
        
        for (auto& x: dataS) {
    if(!x.second){
        return x.first;
    }
            found = false;
  }
        if(!found){
            return highestNum +1;
        }
        
        return 0;
        
    }
};
