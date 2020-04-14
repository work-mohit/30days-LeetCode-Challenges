class Solution {
  
public:
    int maxProfit(vector<int>& prices) {
        long profit = 0;
        for( long i = 0; i < prices.size() - 1;i++){
            if(prices [i+1]> prices[i])
                profit += prices[i+1] - prices[i];
        }
        return profit;
    }
};
