// Problem Link:
// https://leetcode.com/problems/perfect-rectangle/description/

class Solution {
public:
    bool isRectangleCover(vector<vector<int>>& rectangles) {
        long long int area=0;
        set<string>s;
        long long int x1=INT_MAX;
        long long int y1=INT_MAX;
        long long int x2=INT_MIN;
        long long int y2=INT_MIN;
        for(auto a:rectangles){
            x1=min(x1,(long long)a[0]);
            y1=min(y1,(long long)a[1]);
            x2=max(x2,(long long)a[2]);
            y2=max(y2,(long long)a[3]);
            area=area+((long long)(a[2]-a[0])*(long long)(a[3]-a[1]));
            string s1=to_string(a[0])+" "+to_string(a[1]);
            string s2=to_string(a[0])+" "+to_string(a[3]);
            string s3=to_string(a[2])+" "+to_string(a[3]);
            string s4=to_string(a[2])+" "+to_string(a[1]);
            if(s.find(s1)==s.end())
            s.insert(s1);
            else
            s.erase(s1);
            if(s.find(s2)==s.end())
            s.insert(s2);
            else
            s.erase(s2);
            if(s.find(s3)==s.end())
            s.insert(s3);
            else
            s.erase(s3);
            if(s.find(s4)==s.end())
            s.insert(s4);
            else
            s.erase(s4);
        }
        if(s.find(to_string(x1)+" "+to_string(y1))==s.end() || s.find(to_string(x1)+" "+to_string(y2))==s.end() || s.find(to_string(x2)+" "+to_string(y1))==s.end() || s.find(to_string(x2)+" "+to_string(y1))==s.end() || s.size()!=4)
        return false;
        long long int totalarea=(x2-x1)*(y2-y1);
        return area==totalarea;
    }
};

// Solution Link:
// https://leetcode.com/problems/perfect-rectangle/submissions/869812915/
