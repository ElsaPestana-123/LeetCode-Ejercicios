class Solution {
public:
    int nthUglyNumber(int n) {

        vector<long long> dp(n);

        dp[0] = 1;

        int aux2 = 0, aux3 = 0, aux5 = 0;

        for(int i = 1; i < n; i++){
           long long p2 = dp[aux2] * 2;
           long long p3 = dp[aux3] * 3;
           long long p5 = dp[aux5] * 5;

            long long minimo = min({p2,p3,p5});

            dp[i] = minimo;

            if(minimo == p2){
                aux2 ++;
            } 
            
            if(minimo == p3){
                aux3++;
            } 
            
            if(minimo == p5){
                aux5++;
            }

        }

        return dp[n-1];
        
    }
};