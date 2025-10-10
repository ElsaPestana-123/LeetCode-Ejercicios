class Solution {
public:
    bool isPowerOfTwo(int n) {
        string num ="";

        while(n != 0){
            num += to_string(n % 2);
            n /= 2;
        }

        reverse(num.begin(), num.end());

        if (num[0] == '1' && num.substr(1).find_first_not_of('0') == string::npos){
            return true;
        } else {
            return false;
        }
        
    }
};