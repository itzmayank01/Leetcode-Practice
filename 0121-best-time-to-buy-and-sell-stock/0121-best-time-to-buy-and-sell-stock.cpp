class Solution {
public:
    int maxProfit(vector<int>& price) {
      int mini = price[0];
      int n = price.size();
      int maxprofit = 0;

      for(int i = 0; i<n; i++) {
        int cost = price[i] - mini;
        maxprofit = max(maxprofit, cost);
        mini = min(price[i], mini);
      }  
      return maxprofit;
    }
};