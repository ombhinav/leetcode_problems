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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        set<int> st;
        while(temp != NULL){
            st.insert(temp -> val);
            temp = temp -> next;
        }
        ListNode* dummy = new ListNode(-1);
        temp = dummy;
        for(auto it: st){
            temp -> next = new ListNode(it);
            temp = temp -> next;
        }
        
        return dummy -> next;
    }
};