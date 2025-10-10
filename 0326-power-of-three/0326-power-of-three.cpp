class Solution {
public:
    bool isPowerOfThree(int n) {

        if(n == 1) return true;
        if(n <= 0) return false;
        
        bool isresiduo0 = true;

        while(isresiduo0){
            if(n % 3 != 0){
                isresiduo0 = false;
            } else {
                n /= 3;
                if (n == 1) return true;
            }
        }

        return isresiduo0;

    }
};