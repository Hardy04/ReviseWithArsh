// Problem Link:
// https://leetcode.com/problems/airplane-seat-assignment-probability/description/

class Solution {
public:
    double nthPersonGetsNthSeat(int n) {
        double x;
        if(n==1)
        x=1;
        else
        x=(double)1/2;
        return x;
    }
};

// Solution Link:
// https://leetcode.com/problems/airplane-seat-assignment-probability/submissions/869753924/
