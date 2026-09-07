#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int min = prices[0];
    int maxprofit = 0;
    for(int i = 0; i<prices.size(); i++){
      int current_cost = prices[i];
      if (current_cost < min){
        min = current_cost;
      }
      int profit = current_cost - min;
      maxprofit = max(maxprofit,profit);
    }
    return maxprofit;
    } 
};