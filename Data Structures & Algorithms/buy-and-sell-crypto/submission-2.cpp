class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;
        int right = 1;
        int profit = 0;
        int min_price = prices[left];
        while ( right <= prices.size() - 1 )
        {
            if ( min_price >= prices[right] )
            {
                min_price = prices[right];
                left=right;
                right++;
            }
            else if ( min_price < prices[right] )
            {
                if ( prices[right] - min_price > profit )
                {
                    profit = prices[right] - min_price;
                }
                right++;
            }
        }
        return profit;
    }
};
