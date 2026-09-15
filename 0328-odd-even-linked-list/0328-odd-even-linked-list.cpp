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
    ListNode* oddEvenList(ListNode* head) {
        if(head == nullptr || head->next == nullptr)
           return head;
        
        vector<int>list;

        // for odd
        ListNode *temp = head;
        while(temp != nullptr && temp ->next != nullptr){
            list.push_back(temp->val);
            temp = temp->next->next;
        }
        if(temp != nullptr)list.push_back(temp->val);

        // for even
        temp = head->next;
         while(temp != nullptr && temp ->next != nullptr){
            list.push_back(temp->val);
            temp = temp->next->next;
        }
         if(temp != nullptr)list.push_back(temp->val);

         temp = head;
         for(int i = 0;i<list.size();i++){
            temp->val = list[i];
            temp = temp->next;
         }
         return head;

    }
};