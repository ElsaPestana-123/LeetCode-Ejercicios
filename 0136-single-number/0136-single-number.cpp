class Solution {
public:
    int singleNumber(vector<int>& nums) {
      int unico = 0;
      for (int i = 0; i < nums.size();i++){
        unico ^= nums[i] ; 
      }
      return unico;
    } 

};