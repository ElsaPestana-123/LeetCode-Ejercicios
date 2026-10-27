class Solution {
public:
    bool palindromeSub(string &s, int left, int right, vector<vector<int>> &memoria){
        if(left >= right){
            return true;
        }

        if(memoria[left][right] != -1){
            return memoria[left][right];
        }

        if(s[left] == s[right]){
            memoria[left][right] = palindromeSub(s,left+1, right-1, memoria);
        } else {
            memoria[left][right] = 0;
        }

        return memoria[left][right];

    }
    string longestPalindrome(string s) {

        vector<vector<int>> memoria(s.size(), vector<int>(s.size()+1, -1));

        int inicio = 0;
        int maximoLongitud = -1;

        for(int i = 0; i < s.size(); i++){
            for(int j = i; j < s.size(); j++){

                if(palindromeSub(s,i,j, memoria) == 1){

                    int longitudActual = j - i +1;

                    if(longitudActual > maximoLongitud){
                        maximoLongitud = longitudActual;
                        inicio = i;
                    }

                }
            }
        }

        return s.substr(inicio, maximoLongitud);

    }
};