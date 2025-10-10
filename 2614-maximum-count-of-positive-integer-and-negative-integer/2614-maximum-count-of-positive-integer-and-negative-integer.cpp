class Solution {
public:
    int maximumCount(vector<int>& nums) {

        int pos = 0, neg =0;

        for(int i = 0; i < nums.size(); i++){
            if( nums [i] >= 1){
                pos++;
            } else if(nums [i] <= -1 ){
                neg++;
            }
        }

        int maximo = max(pos, neg);

        return maximo;

    }
};