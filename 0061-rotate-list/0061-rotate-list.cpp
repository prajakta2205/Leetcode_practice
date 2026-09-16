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
        if (head == nullptr || head->next == nullptr)
              return head;

        vector<int>list;
        ListNode *temp= head;
        int size = 0;

        while(temp){
            size++;
            list.push_back(temp->val);

            temp = temp ->next;
        }
        
        k = k % size;
        reverse(list.begin(), list.end() - k);
        reverse(list.end() - k, list.end());
        reverse(list.begin(), list.end());

        temp = head;
        for(int i = 0;i<list.size();i++){
            temp->val = list[i];
            temp = temp->next;
        }

        return head;
    }
};