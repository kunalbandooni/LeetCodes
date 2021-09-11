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
    ListNode* mergeTwoLists(ListNode* List1, ListNode* List2) {
        ListNode* a=new ListNode(0);
        ListNode* t=a, *l1=List1, *l2=List2;
        while(l1 != NULL && l2 != NULL){
            if(l1 -> val < l2 -> val){
                t -> next = l1;
                l1 = l1 -> next;
            }
            else{
                t -> next = l2;
                l2 = l2 -> next;
            }
            t = t-> next;
        }
        if(l1 != NULL){
            t -> next = l1;
        }
        else{
            t -> next = l2;
        }
        return a->next;
    }
};