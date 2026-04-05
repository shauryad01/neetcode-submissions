class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() < 2) return 0;

        vector<int> profitvec;
        
        for(int i = 0; i < prices.size() - 1; i++){
            int max_future_price = *max_element(prices.begin() + (i + 1), prices.end());
            profitvec.push_back(max_future_price - prices[i]);
        }

        int overall_max = *max_element(profitvec.begin(), profitvec.end());

        return (overall_max > 0) ? overall_max : 0;
    }
};