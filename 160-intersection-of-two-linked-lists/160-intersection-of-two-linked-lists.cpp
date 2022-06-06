/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    int length(ListNode* A){
        int c=0;
        while(A){
            c++;
            A=A->next;
        }
        return c;
    }
public:
    ListNode *getIntersectionNode(ListNode *A, ListNode *B) {
		int n=length(A);
        int m=length(B);
        if(n>m){
            n=n-m;
            while(n--){
                A=A->next;
            }
        }
        else{
            m=m-n;
            while(m--){
                B=B->next;
            }
        }
        while(A!=B){
            A=A->next;
            B=B->next;
        }
        return A;
        /*int n = 0;
		int m = 0;
		ListNode* ptr1 = headA;
		ListNode* ptr2 = headB;
		while(ptr1 != NULL){
			n++;
			ptr1 = ptr1 -> next;
		}
		while(ptr2 != NULL){
			m++;
			ptr2 = ptr2 -> next;
		}
		int t = abs(n - m);
		if(n > m){
			while(t){
				headA = headA -> next;
				t--;
			}
		}
		else{
			while(t){
				headB = headB -> next;
				t--;
			}
		}
		while(headA != NULL and headB != NULL){
			if(headA == headB){
				return headA;
			}
			headA = headA -> next;
			headB = headB -> next;
		}
		return NULL;*/
    }
};