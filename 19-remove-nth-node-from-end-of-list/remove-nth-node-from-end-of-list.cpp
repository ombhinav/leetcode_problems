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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        if (head == NULL) {
            return NULL;
        }
        int cnt = 0;
        while (temp != NULL) {
            temp = temp->next;
            cnt++;
        }
        int posToRemove = cnt - n;
        if (posToRemove == 0) {
            ListNode* newHead = head;
            newHead = head->next;
            delete head;
            return newHead;
        }

        temp = head;
        while (temp != NULL) {
            posToRemove--;
            if (posToRemove == 0) {
                break;
            }
            temp = temp->next;
        }

        ListNode* nodeToRemove = temp->next;
        temp->next = temp->next->next;
        delete nodeToRemove;

        return head;
    }
};