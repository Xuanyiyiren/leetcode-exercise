#include <iostream>
#include "ListNode_defines.h"
using namespace std;

#define N 5

#include "2181mergeNodes.cpp"

int main(){
	Solution Sol;
	int temp1[] = {0,3,1,0,4,5,2,0},size1 = 8;
	ListNode *test1 = initizeList(temp1 , size1);

	int temp2[] = {0,1,0,3,0,2,2,0},size2 = 8;
	ListNode *test2 = initizeList(temp2 , size2);

	// int temp3[8] = {0,},size3 = 8;
	// ListNode *test3 = initizeList(temp3 , size3);


	// printList(test1);
	// printList(test2);

	ListNode* ans1 = Sol.mergeNodes(test1);
	printList(ans1);

	ListNode* ans2 = Sol.mergeNodes(test2);
	printList(ans2);
	// ListNode* my_try = nullptr;
	// printList(my_try);

	return 0;
}