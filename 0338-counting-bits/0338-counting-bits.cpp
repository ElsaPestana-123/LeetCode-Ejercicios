class Solution {
public:

    long long countBits(int n, vector<int> &memoria){
        if(n == 0){
            return 0;
        }

        if(n == 1){
            return 1;
        }

        if(memoria[n] != -1){
            return memoria[n];
        }

        if(n % 2 == 0){
            memoria[n] = countBits(n / 2, memoria);
        } else {
            memoria[n] = countBits(n / 2, memoria) +1;
        }

        return memoria[n];

    }

    vector<int> countBits(int n) {

        vector<int> memoria (n+1, -1);

        for(int i = 0; i <= n; i++){
            memoria[i] = countBits(i, memoria);
        }
        
        return memoria;
        
    }
};