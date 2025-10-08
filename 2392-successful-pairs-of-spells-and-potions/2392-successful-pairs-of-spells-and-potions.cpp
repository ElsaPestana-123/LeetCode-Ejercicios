class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {

        vector<int> pairs(spells.size(), 0);

        sort(potions.begin(), potions.end());
        
        for(int i = 0; i < spells.size(); i++){
            long long minpotions = (long long)((success + spells[i] - 1) / spells[i]);
            auto index = lower_bound(potions.begin(), potions.end(), minpotions);
            int count = distance(index, potions.end());
            pairs[i] = count;
        }

        return pairs;


        /*vector<int> pairs(spells.size(), 0);

        for(int i = 0; i < spells.size(); i++){
            for(int j = 0; j < potions.size(); j++){
                long long product = (long long)spells[i] * potions[j];
                if (product >= success){
                    pairs[i] ++;
                }
            }
        }
        return pairs;
        */
    }
};