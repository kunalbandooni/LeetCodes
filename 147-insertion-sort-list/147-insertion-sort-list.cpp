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
    ListNode* insertionSortList(ListNode* head_ref) {
        ListNode* min;
        ListNode* temp1=head_ref;
        ListNode* temp2;
        while(temp1!=NULL){
            min=temp1;
            temp2=temp1;
            while(temp2!=NULL){
                if(temp2->val <  min->val)
                    min=temp2;
                temp2=temp2->next;
            }
            auto temp=min->val;
            min->val=temp1->val;
            temp1->val=temp;
            temp1=temp1->next;
        }
        return head_ref;
    }
};