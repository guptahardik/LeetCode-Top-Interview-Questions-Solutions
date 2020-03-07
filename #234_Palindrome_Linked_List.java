/*
Given a singly linked list, determine if it is a palindrome.

Example 1:

Input: 1->2
Output: false
Example 2:

Input: 1->2->2->1
Output: true

Solution info:
Runtime: 2 ms, faster than 39.79% of Java online submissions for Palindrome Linked List.
Memory Usage: 42.1 MB, less than 31.71% of Java online submissions for Palindrome Linked List.
*/

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public boolean isPalindrome(ListNode head) {
        int count = 0;
        ListNode copy = head;
        ListNode secondCopy = head;
        
        Stack<Integer> s  = new Stack<Integer>();
        while(copy!= null){
            copy = copy.next;
            count++;   
        }
        if(count == 1 || count == 0){
            return true;
        }
        if(count%2  == 0){
            int klm = 0;
            while(klm != count/2){
                s.push(secondCopy.val);
                secondCopy = secondCopy.next;
                klm++;
            }
        }else{
            int klm = 0;
            while(klm != count/2){
                s.push(secondCopy.val);
                secondCopy = secondCopy.next;
                klm++;
            }
            secondCopy = secondCopy.next;   
        }
        System.out.println(secondCopy.val);
        
       while(secondCopy != null){
           if(secondCopy.val == s.peek()){
               s.pop();
               secondCopy = secondCopy.next;
           }else{
               return false;
           }
       }   
        return true;
    }
}
