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
private:
    int gcd_num(int a, int b){
        while(b!=0){
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head == nullptr || head -> next == nullptr){
            return head;
        }

    
        ListNode* cur = head;
        ListNode* cur_next = head -> next;
        while(cur_next != nullptr){
            int data = gcd_num(cur->val, cur_next -> val);
            ListNode* new_node = new ListNode(data);

            cur -> next = new_node;
            new_node -> next = cur_next;

            cur = cur_next;
            cur_next = cur -> next;
        }
        return head;
    }
    
};