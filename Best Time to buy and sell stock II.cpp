class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxBuyValue = INT_MIN;
        int maxSellValue = 0;
        for(int i = 0;i < prices.size();i++) {
            int buyValue, sellValue;
            buyValue = max(-prices[i], maxSellValue - prices[i]);
            sellValue = maxBuyValue + prices[i];
            maxSellValue = max(maxSellValue, sellValue);
            maxBuyValue = max(maxBuyValue, buyValue);
        }
        return maxSellValue;
    }
};
