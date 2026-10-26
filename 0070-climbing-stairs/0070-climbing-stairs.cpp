class Solution {
public:
    int cimaLlegar(int cima, int index , vector<int> &memoria){

        if(index > cima){
            return 0;
        }

        if(cima == index){
            return 1;
        }

        if(memoria[index] != -1){
            return memoria[index];
        }

        memoria[index] = cimaLlegar(cima, index +1, memoria) + cimaLlegar(cima, index + 2, memoria);

        return memoria[index];
    }

    int climbStairs(int n) {

        vector<int> memoria (n+1, -1);

        return cimaLlegar(n,0,memoria);
        
    }
};