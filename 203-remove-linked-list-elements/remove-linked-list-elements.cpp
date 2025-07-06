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
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=nullptr && head->val==val)
        {
            ListNode* toDelete=head;
            head=head->next;
            delete toDelete;
        }
        ListNode* current=head;
        while(current!=nullptr && current->next!=nullptr)
        {
            if(current->next->val==val)
            {
                ListNode* toDelete=current->next;
                current->next=current->next->next;
                delete toDelete;
            }
            else
            {
                current=current->next;
            }
        }
        return head;
        
    }
};