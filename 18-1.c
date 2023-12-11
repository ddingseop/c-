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
void bubblesort(int n, node_t* head);

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
    bubblesort(n, head);
    node_t* trail = head;
    while (trail != NULL) {
        printf("%s %d\n", trail->name, trail->price);
        trail = trail->next;
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
        *head = node;
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

void bubblesort(int n, node_t* head) {
    if (head == NULL || head->next == NULL) {
        return;
    }
    int swapped;
    node_t* ptr;
    node_t* end = NULL;

    do {
        swapped = 0;
        ptr = head;

        while (ptr->next != end) {
            if (ptr->price < ptr->next->price) {
                char* temp_name = ptr->name;
                ptr->name = ptr->next->name;
                ptr->next->name = temp_name;

                int temp_price = ptr->price;
                ptr->price = ptr->next->price;
                ptr->next->price = temp_price;

                swapped = 1;
            }
            ptr = ptr->next;
        }
        end = ptr;
    } while (swapped);
}