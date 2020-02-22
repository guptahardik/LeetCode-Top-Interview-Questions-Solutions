/*
Write a function that reverses a string. The input string is given as an array of characters char[].

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

You may assume all the characters consist of printable ascii characters.

Example 1:

Input: ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
Example 2:

Input: ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]

Solution Details
Runtime: 1 ms, faster than 98.74% of Java online submissions for Reverse String.
Memory Usage: 43.2 MB, less than 99.41% of Java online submissions for Reverse String.

*/

class Solution {
    public void reverseString(char[] s) {
        
        int lenT = s.length-1;
        
        for(int i = 0; i < s.length/2 ;i++){
            char t = s[lenT];
            s[lenT] = s[i];
            s[i] =  t;
            lenT--;
        }
    }
}
