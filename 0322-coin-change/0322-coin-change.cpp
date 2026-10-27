class Solution {
public:
   
    int coinChange(vector<int>& coins, int amount) {
       if (amount == 0){
         return 0;
       }

       vector<int> valores(amount +1, amount+1);

       valores[0] = 0;

        for(int i = 1; i <= amount; i++){
            for(int j = 0; j < coins.size(); j++){
                if (i - coins[j] >= 0) {
                    valores[i] = min(valores[i], valores[i - coins[j]] + 1);
                }
            }
        }

        if (valores[amount] == amount + 1) {
            return -1;
        } else {
            return valores[amount];
        }
        
    } 
};