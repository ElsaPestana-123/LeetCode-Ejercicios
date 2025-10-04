class Solution {
public:
    bool isPalindrome(int x) {

        int D; int num; long long res = 0;

        if (x < 0){
            return false;
        }

        num = x;

        while (x != 0){
            D = x % 10;
            res = (res * 10) + D;
            x /= 10;

        }

        if (num == res){
            return true;
        } else {
            return false;
        }
    
    }
};