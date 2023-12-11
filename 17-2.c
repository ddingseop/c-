#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _node node_t;

struct _node {
    char name[20];
    int price;
    node_t* next;
};

node_t* head = NULL;

node_t* create_node(char* name, int price);
void append_node(node_t* node);
node_t* find_largest();

int main()
{
    int n; 
    scanf("%d\n", &n);
    char str[20]; 
    int price;
    for (int i = 0; i < n; i++) {
        scanf("%s %d\n", str, &price);
        node_t* ptr = create_node(str, price);
        if (head == NULL)
            head = ptr;
        else
            append_node(ptr);
    }
    node_t* largest = find_largest();
    printf("%s %d", largest->name, largest->price);
}

node_t* create_node(char* name, int price) {
    node_t* new_node = (node_t*)malloc(sizeof(node_t));
    strcpy(new_node->name, name);
    new_node->price = price;
    new_node->next = NULL;

    return new_node;
}

void append_node(node_t* node) {
    node_t* temp = head; //temp 포인터를 사용하여 연결 리스트를 순회하기 위해 head로 초기화
    while (temp->next != NULL) {
        temp = temp->next; //연결리스트의 끝까지 이동
    }
    temp->next = node; //주어진 노드를 연결 리스트의 끝에 추가
}

node_t* find_largest() {
    node_t* temp = head; 
    node_t* largest = head;

    while (temp != NULL) {
        if (temp->price > largest->price) { //현재노드의 price가 가장큰값보다 크면
            largest = temp; 
        }
        temp = temp->next; //다음 노드로 이동
    }

    return largest;
}

