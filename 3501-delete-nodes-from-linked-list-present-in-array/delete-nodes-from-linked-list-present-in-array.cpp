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

    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        if(head == nullptr){
            return nullptr;
        }
        ListNode* dummy = new ListNode(0);
        dummy -> next = head;
        ListNode* cur = dummy -> next;
        ListNode* prev = dummy;
    
        set<int> st(nums.begin(),nums.end());

        while(cur){
            if(st.count(cur -> val)){
                prev -> next = cur -> next;
                delete cur;
                cur = prev -> next;

            }
            else{
                prev = cur;
                cur = cur -> next;
            }
        }
        ListNode* newHead = dummy->next;
        delete dummy;
        return newHead;

    }
};