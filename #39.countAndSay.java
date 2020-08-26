/*
38. Count and Say
The count-and-say sequence is the sequence of integers with the first five terms as following:

1.     1
2.     11
3.     21
4.     1211
5.     111221

1 is read off as "one 1" or 11.
11 is read off as "two 1s" or 21.
21 is read off as "one 2, then one 1" or 1211.

Given an integer n where 1 ≤ n ≤ 30, generate the nth term of the count-and-say sequence. You can do so recursively, in other words from the previous member read off the digits, counting the number of digits in groups of the same digit.

Note: Each term of the sequence of integers will be represented as a string.

 

Example 1:

Input: 1
Output: "1"
Explanation: This is the base case.

Example 2:

Input: 4
Output: "1211"
Explanation: For n = 3 the term was "21" in which we have two groups "2" and "1", "2" can be read as "12" which means frequency = 1 and value = 2, the same way "1" is read as "11", so the answer is the concatenation of "12" and "11" which is "1211".


Runtime: 17 ms, faster than 28.71% of Java online submissions for Count and Say.
Memory Usage: 40 MB, less than 23.27% of Java online submissions for Count and Say.


*/
class Solution {
    public String countAndSay(int n) {
        String answer = "";
        if(n == 1){
            return "1";
        }else{
        
        String start = countAndSay(n-1);
           
        int counting = 0;
        int setter = 0;
        
        for(int i = 0; i<start.length(); i++){
            
            counting++;
            
            if(i+1 == start.length()){
                if(start.length() == 1){
                    return "11";
                }else{
                if(start.charAt(i) == start.charAt(i-1)){
                    return (answer + counting + start.charAt(i));
                }else{
                   
                    return (answer + "1" + start.charAt(i));
                }
                }
            }else{    
                
                if((int)start.charAt(i) != (int)start.charAt(i+1)){
                
                answer = answer + counting + start.charAt(i);
                counting = 0;
            }
                
        }
            
            
        }
        }
        
        return answer;
    }
}
