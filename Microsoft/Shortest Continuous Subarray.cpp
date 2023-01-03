// Problem Link:
// https://leetcode.com/problems/shortest-unsorted-continuous-subarray/description/

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>v;
        v=nums;
        int x=-1;
        int y=-1;
        sort(v.begin(),v.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=v[i]){
                y=i;
                break;
            }
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]!=v[i]){
                x=i;
                break;
            }
        }
        if(x==-1 && y==-1)
        return 0;
        else
        return abs(x-y)+1;
    }
};

// Solution Link:
// https://leetcode.com/problems/shortest-unsorted-continuous-subarray/submissions/870521740/
