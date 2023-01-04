PROBLEM: 
Given a pattern and a string s, find if s follows the same pattern.
Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in s.

Example 1:

Input: pattern = "abba", s = "dog cat cat dog"
Output: true

Example 2:

Input: pattern = "abba", s = "dog cat cat fish"
Output: false

Example 3:

Input: pattern = "aaaa", s = "dog cat cat dog"
Output: false


Constraints:

1 <= pattern.length <= 300
pattern contains only lower-case English letters.
1 <= s.length <= 3000
s contains only lowercase English letters and spaces ' '.
s does not contain any leading or trailing spaces.
All the words in s are separated by a single space.
-------------------------------------------------------------------------------------------------------------------------

SOLUTION:
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> map3;
        unordered_map<string , char> map4;
       vector <string> v;
       stringstream iss(s);
       string word;
       while(iss>>word){
           v.push_back(word);
       }
       if(v.size()!=pattern.size()){
           return false;
       }
        for(int i=0; i<v.size(); i++){
            if(map3.find(pattern[i])!=map3.end() && map3[pattern[i]]!=v[i]){
                return false;
            }
            if(map4.find(v[i])!=map4.end() && map4[v[i]]!=pattern[i]){
                return false;
            }
            map3[pattern[i]]=v[i];
            map4[v[i]]=pattern[i];
            
        }
        return true;
        
    }
};
