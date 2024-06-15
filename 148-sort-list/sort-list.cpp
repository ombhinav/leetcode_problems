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
    ListNode* sortList(ListNode* head) {
        ListNode* temp = head;
        vector<int> arr;
        while(temp != NULL){
            arr.push_back(temp->val);
            temp = temp -> next;
        }
        sort(arr.begin(),arr.end());
        ListNode* dummy = new ListNode(-1);
        temp = dummy;
        for(auto it: arr){
            ListNode* newNode = new ListNode(it);
            temp -> next = newNode;
            temp = temp -> next;
        }
        return dummy -> next;
    }
};