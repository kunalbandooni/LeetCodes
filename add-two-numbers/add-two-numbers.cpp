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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp=new ListNode(0);
        int c=0;
        ListNode* t=temp;
        while(l1!=NULL && l2!=NULL){
            t->next=new ListNode(l1->val + l2->val + c);
            t=t->next;
            if(t->val>9){
                t->val=t->val%10;
                c=1;
            }
            else
                c=0;
            l1=l1->next;
            l2=l2->next;
        }
        while (l1 != NULL){
            t->next=new ListNode(l1->val + c);
            t=t->next;
            if(t->val>9){
                t->val=t->val%10;
                c=1;
            }
            else
                c=0;
            l1=l1->next;
        }
        while (l2 != NULL){
            t->next=new ListNode(l2->val + c);
            t=t->next;
            if(t->val>9){
                t->val=t->val%10;
                c=1;
            }
            else
                c=0;
            l2=l2->next;
        }
        if(c==1)
            t->next =new ListNode (1);
        return temp->next;
    }
};