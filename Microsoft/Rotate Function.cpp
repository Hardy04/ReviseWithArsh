// Problem Link:
// https://leetcode.com/problems/rotate-function/description/

class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int ans=0;
        int s=0;
        for(int i=0;i<nums.size();i++){
            ans=ans+(nums[i]*i);
            s=s+nums[i];
        }
        int mx=ans;
        int x=nums.size()-1;
        for(int i=0;i<nums.size();i++){
            ans=ans+s-(nums.size()*nums[x]);
            x--;
            mx=max(mx,ans);
        }
        return mx;
    }
};

// Solution Link:
// leetcode.com/problems/rotate-function/submissions/869736492/
