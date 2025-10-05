class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> lista;

        for (int num : nums){
            if (lista.count(num)){
                return true;
            }

            lista.insert(num);
        }
        return false;
        
    }
};