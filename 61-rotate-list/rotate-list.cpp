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
    ListNode* rotateRight(ListNode* head, int k) {
        //optimal approach
        if(head == NULL||head->next == NULL||k == 0) return head;
        ListNode* temp = head;
        ListNode* ogHead = head;
        int count=1;
        while(temp->next != NULL){
            temp = temp -> next;
            count++;
        }
        k = k%count;
       int end = count-k; //to get end of the list
        temp -> next = head;
        while(end--){
            temp = temp -> next;
        }
        head = temp -> next;
        temp -> next = NULL;
        return head;
        
        

        //brute force

        // ListNode* ans = NULL;
        // ListNode* temp = head;
        // int count = 0;
        // while (temp != NULL) {
        //     temp = temp->next;
        //     count++;
        // }
        // if (count != 0) {
        //     k = k % count;
        // }

        // if (k == 0 && head == NULL) {
        //     return ans;
        // }
        // while (k > 0) {
        //     if (head == NULL || head->next == NULL) {
        //         return head;
        //     }
        //     ListNode* prevTail = head;
        //     ListNode* tail = head;
        //     ListNode* head_temp = head;
        //     while (tail->next->next != NULL) {
        //         tail = tail->next;
        //         prevTail = prevTail->next;
        //     }

        //     head = tail->next;
        //     head->next = head_temp;
        //     prevTail->next = NULL;
        //     k--;
        // }
        // return head;


    }
};