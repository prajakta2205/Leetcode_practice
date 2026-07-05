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
        // determining length of list
        int cnt = 0;
        ListNode* temp = head;

        while(temp != nullptr){
            cnt++;
            temp = temp->next;
        }
        
        // if node is the 1st element
        if(cnt == n){
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        
        int res = cnt - n;
        temp = head;
        while(temp != nullptr){

            res--;

            if(res == 0){
                
                ListNode* delNode = temp->next;
                temp -> next = temp ->next->next;
                delete delNode;
            }
            
            
            temp = temp->next;
        }
        return head;
        
    }
};