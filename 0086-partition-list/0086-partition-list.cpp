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
    ListNode* partition(ListNode* head, int x) {
        if (head == nullptr || head->next == nullptr)
            return head;

        vector<int>list1;
        vector<int>list2;

        ListNode *temp = head;
        while(temp){
            if(temp -> val < x){
                list1.push_back(temp->val);
            }
            else {
                list2.push_back(temp->val);
            }
            temp = temp->next;
        }
        temp = head;
        for(int i = 0;i<list1.size();i++){
            temp->val = list1[i];
            temp = temp->next;
        }
        for(int i = 0;i<list2.size();i++){
            temp->val = list2[i];
            temp = temp->next;
        }
        return head;
    }
};