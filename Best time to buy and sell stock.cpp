class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=prices.size();
        int buy=prices[0],sell=0;
        for(int i=1;i<l;i++)
        {
             if(prices[i]<buy)
                buy=prices[i];
             else
        
                sell=max(sell,prices[i]-buy);

         

        }  
            return sell;
    }
};




// ## prices[1] = 1     currMin=1  ans=0
// ## prices[2] = 5     currMin= 1  ans=4
