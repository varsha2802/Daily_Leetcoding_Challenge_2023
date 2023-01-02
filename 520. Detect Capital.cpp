PROBLEM:
We define the usage of capitals in a word to be right when one of the following cases holds:

All letters in this word are capitals, like "USA".
All letters in this word are not capitals, like "leetcode".
Only the first letter in this word is capital, like "Google".
Given a string word, return true if the usage of capitals in it is right.
  
Example 1:

Input: word = "USA"
Output: true
  
  
Example 2:

Input: word = "FlaG"
Output: false
  
Constraints:

1 <= word.length <= 100
word consists of lowercase and uppercase English letters.
  
SOLUTION:
class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.size();
        int count=0;
        for(int i=0; i<n; i++){
            if(word[i]>='A' && word[i]<='Z'){
                count++;
            }
        }
        for(int i=0; i<n; i++){
            if(count==n){
                return true;
            }
            else if(count==0){
                return true;
            }
            if(!(count==0 ||(count==1 && word[0]>='A' && word[0]<='Z'))){
                return false;
            }
        }
        return true;
        
    }
};
