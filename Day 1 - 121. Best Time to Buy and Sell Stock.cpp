// Author Pushkraj
// Date 3 july 2023
// Q 73. Set Matrix Zeroes

// link : https://leetcode.com/problems/set-matrix-zeroes/


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size(),min = prices[0],res = 0;
        for(int i=1; i<len; i++){
            if(prices[i] > min) res = max(res,prices[i]-min);
            if(prices[i]<min) min = prices[i];
        }
        return res;
    }
};