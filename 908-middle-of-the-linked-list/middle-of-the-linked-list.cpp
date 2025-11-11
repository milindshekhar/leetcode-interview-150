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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        int count=0;
        while(temp!=nullptr)
        {
            count+=1;
            temp=temp->next;
        }
        int midPosition = (count)/2 +1;
        ListNode* middleNode = head;
        for(int i=1;i<midPosition;i++)
        {
            middleNode=middleNode->next;
        }
        return middleNode; 
    }
};