// Problem Link:
// https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/description/

class Solution {
public:
    int numberOfSubstrings(string s) {
        int c=0,j=0;
        map<char,int>m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
            while(m['a'] && m['b'] && m['c']){
                c=c+s.size()-i;
                m[s[j]]--;
                j++;
            }
        }
        return c;
    }
};

// Solution Link:
// https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/submissions/870533894/
