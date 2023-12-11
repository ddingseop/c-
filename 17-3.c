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
node_t* find_second(node_t* head);

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
    node_t* second = find_second(head);
    printf("%s %d", second->name, second->price);
}

node_t* create_node(char* name, int price) {
    node_t* n = (node_t*)malloc(sizeof(node_t)); //node_t 구조체에 대한 포인터 할당
    n->name = (char*)malloc(strlen(name) + 1); //문자열을 저장할 수 있는 메모리 할당
    strcpy(n->name, name); //전달받은 name문자열을 새로 할당한 메모리로 복사
    n->price = price;
    n->next = NULL;
    return n;
}

void append_node(node_t** head, node_t* node) {
    //리스트가 비어있거나 새로운 노드의 price가 헤드 노드의 price보다 큰 경우
    if (*head == NULL || node->price > (*head)->price) {
        node->next = *head; //새로운 노드의 다음 노드로 현재의 헤드를 지정
        *head = node; //헤드를 새로운 노드로 업데이트
    }
    else {
        node_t* c = *head;

        //리스트를 순회하면서 올바른 위치를 찾을때까지 반복
        while (c->next != NULL && c->next->price > node->price) {
            c = c->next;
        }

        node->next = c->next; //새로운 노드의 다음 노드로 현재위치의 다음 노드를 지정
        c->next = node;  //현재위치의 다음 노드로 새로운 노드를 지정
    }
}

node_t* find_second(node_t* head) {
    return head->next; //헤드 다음의 포인터 반환
}