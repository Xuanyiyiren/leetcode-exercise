#include <iostream>
#include "ListNode_defines.h"
using namespace std;

ListNode* initizeList(int *arr, int size){
	// arr : an array of integers
	// size : the size of the array
	if(size < 1) return nullptr; 
	ListNode* head = new ListNode(arr[0]);
	ListNode* p = head;

	for(int i = 1; i < size ; i++){
		p -> next = new ListNode(arr[i]);
		p = p -> next;
	}
	
	return head;
}

void printList(ListNode* head){
	if(!head){
		cout << "Null head!" << endl;
		return;
	}
    ListNode* p = head;
	cout << "The Linked List is : ";
    while(p != nullptr){
        cout << p->val << " ";
        p = p->next;
    }
    cout << endl;
}