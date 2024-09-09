#ifndef _LISTNODE_DEFINE_
#define _LISTNODE_DEFINE_

# include <iostream>
using namespace std;
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* initizeList(int *int_list, int n);
void printList(ListNode* head);


#endif