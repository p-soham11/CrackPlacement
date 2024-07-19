class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maximumProfit = 0;
        int leastPrice = prices[0];

        for(int i=1; i < prices.size(); i++)
        {
            maximumProfit = max(maximumProfit, prices[i]-leastPrice);       
            leastPrice = min(leastPrice, prices[i]);
        }

        return maximumProfit;
    }
};