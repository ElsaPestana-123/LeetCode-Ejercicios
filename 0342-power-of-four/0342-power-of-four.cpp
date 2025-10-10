class Solution {
public:
    bool isPowerOfFour(int n) {

        if(n <= 0) return false;

        double resultado;

        resultado = log(n) / log(4.0);


        if(resultado  == floor(resultado)){

            return true;

        } else {

            return false;
        }
        
    }
};