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
    node_t* n = (node_t*)malloc(sizeof(node_t)); //node_t ����ü�� ���� ������ �Ҵ�
    n->name = (char*)malloc(strlen(name) + 1); //���ڿ��� ������ �� �ִ� �޸� �Ҵ�
    strcpy(n->name, name); //���޹��� name���ڿ��� ���� �Ҵ��� �޸𸮷� ����
    n->price = price;
    n->next = NULL;
    return n;
}

void append_node(node_t** head, node_t* node) {
    //����Ʈ�� ����ְų� ���ο� ����� price�� ��� ����� price���� ū ���
    if (*head == NULL || node->price > (*head)->price) {
        node->next = *head; //���ο� ����� ���� ���� ������ ��带 ����
        *head = node; //��带 ���ο� ���� ������Ʈ
    }
    else {
        node_t* c = *head;

        //����Ʈ�� ��ȸ�ϸ鼭 �ùٸ� ��ġ�� ã�������� �ݺ�
        while (c->next != NULL && c->next->price > node->price) {
            c = c->next;
        }

        node->next = c->next; //���ο� ����� ���� ���� ������ġ�� ���� ��带 ����
        c->next = node;  //������ġ�� ���� ���� ���ο� ��带 ����
    }
}

node_t* find_second(node_t* head) {
    return head->next; //��� ������ ������ ��ȯ
}