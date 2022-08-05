class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=0;
        int sell=1;
        int profit=0;
        for (int i=0;i<prices.size()-1;i++){
            if(prices[buy]<prices[sell]){
                if(profit<prices[sell]-prices[buy]){
                    profit=prices[sell]-prices[buy]; 
                }
                sell++;
            }else{
                buy=sell;
                sell++;
            } 
        }
        return profit;
        
    }
};