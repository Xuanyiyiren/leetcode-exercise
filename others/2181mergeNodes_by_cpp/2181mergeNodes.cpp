#include "ListNode_defines.h"

class Solution {
public:
	ListNode* FristNonZero(ListNode *head){
		// Find the frist zero in the linked list and free all nodes before
		ListNode *p = head->next;
		while(!head->val){
			p = head->next;
			if(!p)
				return nullptr;
			delete head;
			head = p;
		}
		return head;
	}
    ListNode* mergeNodes(ListNode* head) {
		// cout << "mergeNodes Begin!" << endl;
		head = this -> FristNonZero(head);

		ListNode *p = head , *q = head -> next;
		// cout << q -> val << endl;
		ListNode *temp;
		while(q){
			// cout << "RUN WHILE?" << endl;
			if(q->val){
				p -> val += q -> val;
				temp = q;
				q = q -> next;
				p -> next = q;
				delete temp;
			}
			else{
				temp = p;
				p = this -> FristNonZero(q);
				if(p){
					temp -> next = p;
					q = p -> next;
				}
				else{
					temp -> next = nullptr;
					return head;
				}
			}
		}


		cout << "mergeNodes End!" << endl;
		return head;
		
    }
};