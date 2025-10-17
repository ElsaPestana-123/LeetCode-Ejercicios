class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>pascal(rowIndex +1);
        pascal[0] = 1;
        for(int i = 1; i <=rowIndex; i++){
            pascal[i]=(long long) pascal[i-1]*(rowIndex-i+1)/i;

        }

       return pascal;
        
    }
};