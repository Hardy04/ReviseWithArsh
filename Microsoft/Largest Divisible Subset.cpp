// Problem Link:
// https://leetcode.com/problems/largest-divisible-subset/description/

class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        vector<int>v;
        vector<int>dp(nums.size(),1);
        sort(nums.begin(),nums.end());
        int mx=1,num=-1;
        for(int i=1;i<nums.size();i++){
            for(int j=0;j<i;j++){
                if(nums[i]%nums[j]==0 && dp[i]<dp[j]+1)
                dp[i]=dp[j]+1;
                mx=max(mx,dp[i]);
            }
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(mx==dp[i] && (num==-1 || num%nums[i]==0)){
                v.push_back(nums[i]);
                mx--;
                num=nums[i];
            }
        }
        return v;
    }
};

// Solution Link:
// https://leetcode.com/problems/largest-divisible-subset/submissions/870553580/
