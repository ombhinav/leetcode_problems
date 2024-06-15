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
    int getDecimalValue(ListNode* head) {
        ListNode* temp = head;
        queue<int> qt;
        while(temp != NULL){
            qt.push(temp -> val);
            temp = temp -> next;
        }
        int n = qt.size()-1;
        int sum = 0;
        while (!qt.empty()) {
            int it = qt.front();
            qt.pop();
            sum += it * pow(2, n--);
        }
        return sum;

    }
};