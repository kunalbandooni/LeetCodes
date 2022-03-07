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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1 and !list2)
            return NULL;
        if(!list1)
            return list2;
        if(!list2)
            return list1;
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        ListNode* head=new ListNode();
        if(temp1->val <= temp2->val){
            head=temp1;
            temp1=temp1->next;
        }
        else{
            head=temp2;
            temp2=temp2->next;
        }
        ListNode* new_temp=head;
        while(temp1 and temp2){
            if(temp1->val >= temp2->val){
                new_temp->next=temp2;
                temp2=temp2->next;
            }
            else{
                new_temp->next=temp1;
                temp1=temp1->next;
            }
            new_temp=new_temp->next;
        }
        if(temp1)
            new_temp->next=temp1;
        else
            new_temp->next=temp2;
        return head;
    }
};