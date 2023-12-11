//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct _node* node_ptr;
//struct _node {
//	int data;
//	node_ptr next;
//};
//
//node_ptr head = NULL;
//
//int main() {
//	head = (node_ptr)malloc(sizeof(struct _node));
//	head->data = 10;
//	head->next = NULL;
//
//	head->next = (node_ptr)malloc(sizeof(struct _node));
//	head->next->data = 20;
//	head->next->next = NULL;
//
//	head->next->next = (node_ptr)malloc(sizeof(struct _node));
//	head->next->next->data = 30;
//	head->next->next->next = NULL;
//
//	node_ptr trail = head;
//	while (trail != NULL) {
//		printf("%d ", trail->data);
//		trail = trail->next;
//	}
//}