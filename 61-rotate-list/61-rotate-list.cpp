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
        
        if(!head){
            return head;
        }
        ListNode*temp=head;
        int c=1;
        //Find the size of the list
        while(temp->next){
            temp=temp->next;
            c++;
        }
        //connect for circular list
        temp->next=head;
        //remove cycle from k
        k=c-k%c;
        k--; //reduce by one as we need to reach prev elemnt of the new head
        temp=head;
        while(k--){
            temp=temp->next;
        }
        head=temp->next;
        temp->next=NULL;
        return head;
        /*if(!head)
            return NULL;
        ListNode* temp1=head;
        int n=1;
        while(temp1){
            temp1=temp1->next;
            n++;
        }
        k=k%n;
        int z=n-k-1;
        if(z==0)
            return head;
        ListNode *temp=head;
        while(z!=0){
            temp=temp->next;
            z--;
        }
        ListNode* prev=temp;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=head;
        head=prev->next;
        prev->next=NULL;
        return head;*/
    }
};