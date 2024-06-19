#include <iostream>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int max_value;
        int bought_price;
        bool is_buyed = false;
        for(int i = 0; i < prices.size(); i++){
            if(i != prices.size() - 1){
                if((prices[i] < prices[i + 1]) && (is_buyed == false)){
                    is_buyed = true;
                    bought_price = prices[i];
            }
                else if((is_buyed) && (prices[i] > prices[i+1])){
                    is_buyed = false;
                    profit += prices[i] - bought_price;
                }
            }
            else{
                if(is_buyed == true){
                    profit += prices[i] - bought_price;
                }
            }
        }
            return profit;
    }

};
