// Leetcode Link:
// https://leetcode.com/problems/minimum-deletions-to-make-array-divisible/description/

class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        int g=numsDivide[0];
        for(int i=1;i<numsDivide.size();i++){
            g=__gcd(g,numsDivide[i]);
        }
        int c=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(g%nums[i]==0)
            break;
            else
            c++;
        }
        if(c==nums.size())
        return -1;
        else
        return c;
    }
};

// Solution Link:
// https://leetcode.com/problems/minimum-deletions-to-make-array-divisible/submissions/868748264/
