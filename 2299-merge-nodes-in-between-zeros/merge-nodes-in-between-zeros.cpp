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
    ListNode* mergeNodes(ListNode* head) {
        if(!head){
            return NULL;
        }
        ListNode* temp = head;
        ListNode* head2 = new ListNode(-1);
        ListNode* temp2 = head2;
        int sum =0;
        vector<int> collective;
        while(temp != NULL){
            
            if(temp -> val == 0 && temp != head){
                ListNode* node = new ListNode(sum);
                temp2 -> next = node;
                temp2 = temp2 -> next;
                
                // collective.push_back(sum);
                sum = 0;
            }
            else{
                sum += temp -> val;
            }
            temp = temp -> next;
        }
        // for ( auto it: collective){
        //     cout<< it<< " ";
        // }
        return head2->next;
    }
};