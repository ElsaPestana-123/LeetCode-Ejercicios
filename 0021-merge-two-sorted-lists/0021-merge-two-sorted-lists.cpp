/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> nums;

        ListNode* actual = list1;
        while(actual != nullptr){
            nums.push_back(actual -> val);
            actual = actual -> next;
        }

        ListNode* actual2 = list2;
        while(actual2 != nullptr){
            nums.push_back(actual2 -> val);
            actual2 = actual2 -> next;
        }

        if (nums.empty()) {
            return nullptr;
        }

        for(int i = 0; i < nums.size() -1; i++){
            for (int j = 0; j < nums.size() - i -1; j++){
                if (nums[j] > nums[j+1]){
                    swap(nums[j], nums[j+1]);
                }
            }

        }

        if (nums.empty()) return nullptr;

        ListNode* newindice = new ListNode(nums[0]);
        ListNode* actualNew = newindice;

        for (int i = 1; i < nums.size(); i++){
            actualNew -> next = new ListNode(nums[i]);
            actualNew = actualNew -> next;
        }

        return newindice;

    }
    
};