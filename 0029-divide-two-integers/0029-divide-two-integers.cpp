class Solution {
public:
    int divide(int dividend, int divisor) {

        int cociente = 0;
        int resto = 0;

        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }

        bool esNegativo = (dividend < 0) ^ (divisor < 0);

        if(divisor == 0){
            return -1;
        }

        if(dividend == 0){
            return 0;
        }

        if(divisor == 1){
            return dividend;
        }

        long long a = abs((long long)dividend);
        long long b = abs((long long)divisor);

        while(a >= b){
            a = a - b;
            cociente++;
        }

        if(esNegativo){
            return -cociente;
        }

        return cociente;
        
    }
};