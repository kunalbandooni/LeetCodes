/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        // because of next two lines, 
        //      I got runtime error 5 times,
        //          and so I ended up checking code
        //              again and again
        if(!head)
            return NULL;
        Node* temp=head;
        Node* pt;
        
        // First pass creates a deep copy
        while(temp!=NULL){
            Node* p=new Node(temp->val);
            p->next=temp->next;
            temp->next=p;
            temp=p->next;
        }
        
        
        // connecting the pointers now...
        
        // random ones
        Node* p;
        temp=head;
        while(temp!=NULL){
            p=temp->next;
            if(!temp->random)
                p->random=NULL;
            else
                p->random=temp->random->next;
            temp=p->next;
        }
        
        // next pointers now
        p=head->next;
        temp=head;
        pt=p;
        while(temp!=NULL){
            temp->next=pt->next;
            temp=temp->next;
            if(pt->next)
                pt->next=temp->next;
            pt=pt->next;
        }
        
        return p;
        
        /*map<Node*,Node*>mp;
        Node* temp = head;
    
        while(temp != NULL){
            Node* copy = new Node(temp->val);
            mp[temp] = copy;
            temp = temp->next;
        }
        
        temp = head;
        while(temp != NULL){
            mp[temp]->next = mp[temp->next];
            mp[temp]->random = mp[temp->random];
                temp = temp->next;
        }
    
        return mp[head];*/
    }
};