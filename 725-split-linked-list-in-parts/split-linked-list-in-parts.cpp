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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans;
        ListNode* current = head;
        int cnt = 0;
        while(current != nullptr){
            current = current -> next;
            cnt++;
        }
        int splitSize = cnt / k;
        int extra = cnt % k;

        current = head;
        ListNode* prev = current;
        
        for(int i=0;i<k;i++){
            ListNode* newPart = current;
            int currentSize = splitSize;
            if(extra > 0){
                extra--;
                currentSize++;
            }
            int j = 0;
            while(j < currentSize){
                prev = current;
                if(current != nullptr){
                    current = current -> next;
                }
                j++;
            }
            if(prev != nullptr){
                prev -> next = nullptr;
            }
            ans.push_back(newPart);
        }

        return ans;
    }
};