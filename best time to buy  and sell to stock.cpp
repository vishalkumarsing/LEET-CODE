class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min= prices[0]; 
        int ans = 0;
        int n=prices.size();
       for(int i=0; i<n; i++){
           if(ans<prices[i] - min)
           {
               ans = prices[i]-min ;
           }
           if(min>prices[i])
           {
               min = prices[i];
           }
       }
       return ans;
        
    }
};
