// Author Pushkraj
// Date 3 july 2023
// 283. Move Zeroes
// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
// Note that you must do this in-place without making a copy of the array.
// link : https://leetcode.com/problems/move-zeroes/


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len = nums.size(),i,j=0;
        for(i=0,j=0; i<len; i++){
            if(nums[i] !=0 ){
                swap(nums[j],nums[i]);
                j++;
            }
        }
    }
};