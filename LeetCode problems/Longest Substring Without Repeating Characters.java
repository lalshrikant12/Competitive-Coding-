/*Given a string s, find the length of the longest substring without repeating characters.

 

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
Example 4:

Input: s = ""
Output: 0
 

Constraints:

0 <= s.length <= 5 * 104
s consists of English letters, digits, symbols and spaces. 


Given a string s, find the length of the longest substring without repeating characters.

 

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
Example 4:

Input: s = ""
Output: 0
 

Constraints:

0 <= s.length <= 5 * 104
s consists of English letters, digits, symbols and spaces.
*/

class Solution {
    public int lengthOfLongestSubstring(String s) {
        
        int a_pointer=0;
        int b_pointer=0;
        int max=0;
            HashSet<Character> set=new HashSet();  
        while(a_pointer<s.length())
        {
            if(!set.contains(s.charAt(a_pointer)))
            {
                set.add(s.charAt(a_pointer));
                    a_pointer++;
                max=Math.max(set.size(),max);
            }
            else 
            {
                set.remove(s.charAt(b_pointer));
                b_pointer++;
            }
            
        }
     return max;   
    }
}
