#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int max_water = 0;
        int i = 0;
        int j = n - 1;

        while (i < j) {
            int h = min(height[i], height[j]);
            int w = j - i;

            int area = h * w;
            max_water = max(max_water, area);

            if (height[i] >= height[j]) {
                j--;
            }
            else {
                i++;
            }
        }

        return max_water;
    }
};