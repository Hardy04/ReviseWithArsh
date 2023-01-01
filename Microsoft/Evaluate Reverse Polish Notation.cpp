// Leetcode Link:
// https://leetcode.com/problems/evaluate-reverse-polish-notation/description/

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int ans=0;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
                int y=st.top();
                st.pop();
                int x=st.top();
                st.pop();
                if(tokens[i]=="+")
                st.push(x+y);
                else if(tokens[i]=="-")
                st.push(x-y);
                else if(tokens[i]=="*")
                st.push(x*y);
                else
                st.push(x/y);
            }
            else{
                int x=stoi(tokens[i]);
                st.push(x);
            }
        }
        return st.top();
    }
};

// Solution Link:
// https://leetcode.com/problems/evaluate-reverse-polish-notation/submissions/868770908/
