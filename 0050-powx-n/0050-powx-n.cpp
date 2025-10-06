class Solution {
public:
    double myPow(double x, int n) {

        if (n == 0) return 1.0;
        double total = 1.0;
        long long exp = n;

        if (exp < 0){
            x = 1 / x;
            exp = -exp;
        }

        while(exp > 0){
            if(exp % 2 == 1) total *= x;
            x *= x;
            exp /= 2;
        }

        return total;
        
    }
};