// Leetcode Link:
// https://leetcode.com/problems/bulls-and-cows/description/

class Solution {
public:
    string getHint(string secret, string guess) {
        int c1=0,c2=0;
        map<int,int>m1,m2;
        for(int i=0;i<secret.size();i++){
            if(secret[i]==guess[i])
            c1++;
            else{
                m1[secret[i]-'0']++;
                m2[guess[i]-'0']++;
            }            
        }
        for(auto pr:m1){
            if(m2.find(pr.first)!=m2.end()){
                c2=c2+min(pr.second,m2[pr.first]);
            }
        }
        string s;
        s=to_string(c1)+"A"+to_string(c2)+"B";
        return s;
    }
};

// Solution Link: 
// https://leetcode.com/problems/bulls-and-cows/submissions/868729217/
