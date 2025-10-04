class Solution {
public:
    int romanToInt(string s) {
        int total = 0;
        int valores[256] = {};
        valores['I'] = 1;
        valores['V'] = 5;
        valores['X'] = 10;
        valores['L'] = 50;
        valores['C'] = 100;
        valores['D'] = 500;
        valores['M'] = 1000;

        for (int i = 0; i < s.length(); i++){
            if (i < s.length()-1 && valores[s[i]] < valores[s[i + 1]]){
                total -= valores[s[i]];
            } else{
                total += valores[s[i]];
            }
        }

        return total;
        
    }
};