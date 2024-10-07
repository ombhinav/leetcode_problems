class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int maxProf = 0;
        // int mini = prices[0];
        // for(int i=0;i<prices.size();i++){
        //     maxProf = max(maxProf,prices[i]-mini);
        //     mini = min(mini,prices[i]);
        // }
        // return maxProf;



        int n = prices.size();
        int profit = 0;
        int maxi = INT_MIN;
        int mini = prices[0];
        for(int i=0;i<n;i++){
            profit = max(profit,prices[i] - mini);
            mini = min(mini, prices[i]);
        }
        return profit;
    }
};