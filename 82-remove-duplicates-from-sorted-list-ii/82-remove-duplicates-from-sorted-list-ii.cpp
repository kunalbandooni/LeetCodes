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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        map<int,int> m;
        while(temp){
            m[temp->val]++;
            temp=temp->next;
        }
        ListNode* p=new ListNode(0);
        temp=p;
        for(auto i:m){
            if(i.second==1){
                temp->next=new ListNode(i.first);
                temp=temp->next;
            }
        }
        return p->next;
    }
};