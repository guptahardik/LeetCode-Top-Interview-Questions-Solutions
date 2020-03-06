/*
Given an integer, write a function to determine if it is a power of three.

Example 1:

Input: 27
Output: true
Example 2:

Input: 0
Output: false
Example 3:

Input: 9
Output: true
Example 4:

Input: 45
Output: false

Looped Solution:
Runtime: 32 ms, faster than 8.93% of C++ online submissions for Power of Three.
Memory Usage: 7.2 MB, less than 100.00% of C++ online submissions for Power of Three.

*/

class Solution {
public:
    bool isPowerOfThree(int n) {
        int a = 0;
        bool breakT = true;
        if(n <= 0 ){
            return false;
        }
        if( n== 1){
            return true;
        }
        while(breakT){
            if(n % 3 == 0){
                n = n/ 3;
                if(n == 1){
                    breakT = false;
                }
            }else{
                return false;
            }
            
        }
        return true;
    }
};
