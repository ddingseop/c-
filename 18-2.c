#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _node node_t;

struct _node {
    char* name;
    int price;
    node_t* next;
};

node_t* create_node(char* name, int price);
void append_node(node_t** head, node_t* node);
void remove_node(node_t** head, node_t* node);
node_t* find_largest(node_t* head);

int main()
{
    int n; scanf("%d\n", &n);
    char str[20]; int price;
    node_t* head = NULL;
    for (int i = 0; i < n; i++) {
        scanf("%s %d\n", str, &price);
        node_t* ptr = create_node(str, price);
        append_node(&head, ptr);
    }
    for (int i = 0; i < n; i++) {
        node_t* largest = find_largest(head);
        printf("%s %d\n", largest->name, largest->price);
        remove_node(&head, largest);
        free(largest);
    }
}

node_t* create_node(char* name, int price) {
    node_t* n = (node_t*)malloc(sizeof(node_t));
    n->name = (char*)malloc(strlen(name) + 1);
    strcpy(n->name, name);
    n->price = price;
    n->next = NULL;
    return n;
}

void append_node(node_t** head, node_t* node) {
    if (*head == NULL || node->price > (*head)->price) {
        node->next = *head;
        *head = node;  //새로운 노드를 리스트 맨앞에 삽입
    }
    else {
        node_t* c = *head;

        while (c->next != NULL && c->next->price > node->price) {
            c = c->next;
        }

        node->next = c->next;
        c->next = node;
    }
}

void remove_node(node_t** head, node_t* node) {
    if (*head == node) {  //제거할 노드가 리스트의 첫 번째 노드라면
        *head = node->next;  //헤드를 업데이트하여 첫 번째 노드 건너뜀
    }
    else {
        node_t* temp = *head;

        while (temp != NULL && temp->next != node) { 
            temp = temp->next;
        }

        if (temp != NULL) {  //루프를 통해 찾은 이전 노드가 실제로 존재할경우
            temp->next = node->next;  //이전노드의 next를 찾고자하는 노드의 next로 설정
        }                             //찾고자하는 노드를 제거해줌
    }
}

node_t* find_largest(node_t* head) {
    if (head == NULL) {
        return NULL;
    }

    node_t* largest = head;
    node_t* temp = head;

    while (temp != NULL) {
        if (temp->price > largest->price) {
            largest = temp;
        }
        temp = temp->next;
    }

    return largest;
}

