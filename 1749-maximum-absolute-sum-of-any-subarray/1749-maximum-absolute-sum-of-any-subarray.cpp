#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int current_Array_Sum = nums[0];
        int max_Array_Sum = nums[0];

        for(int i = 1; i < nums.size(); i++) {
            current_Array_Sum = max(nums[i],current_Array_Sum+nums[i]);
            max_Array_Sum = max(current_Array_Sum,max_Array_Sum);   
        }

        current_Array_Sum = nums[0];
        int min_Array_Sum = nums[0];

        for(int i = 1; i < nums.size(); i++) {
            current_Array_Sum = min(nums[i],current_Array_Sum+nums[i]);
            min_Array_Sum = min(current_Array_Sum,min_Array_Sum);   
        }
        return max(abs(max_Array_Sum), abs(min_Array_Sum));
    }
};