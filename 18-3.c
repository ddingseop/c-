#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef unsigned long long long_t;
typedef struct _node* node_ptr;

struct _node {
    long_t num;
    node_ptr next;
};

node_ptr collatz(long_t n);
void clean(node_ptr head);

int main()
{
    int n; scanf("%d\n", &n);
    while (n--) {
        long_t m; scanf("%lld\n", &m);
        node_ptr head = collatz(m);
        for (node_ptr t = head; t != NULL; t = t->next)
            printf("%lld ", t->num);
        printf("\n");
        clean(head);
    }
    printf("finished");
}

node_ptr collatz(long_t n) {
    node_ptr head = NULL;
    node_ptr current = NULL;

    while (n != 1) {
        if (head == NULL) { //리스트 비어있으면
            head = (node_ptr)malloc(sizeof(struct _node));  //헤드에 새로운 노드 할당
            current = head;  //현재노드로 설정
        }
        else {
            current->next = (node_ptr)malloc(sizeof(struct _node)); //다음 노드에 새로운 노드 할당
            current = current->next; //현재 노드 업데이트
        }

        current->num = n;  //현재 노드의 데이터 필드에 현재 숫자 할당

        if (n % 2 == 0) {
            n /= 2;
        }
        else {
            n = 3 * n + 1;
        }
    }

    if (head == NULL) {  //리스트가 비어있을 경우 헤드에 1을 가지는 노드 할당하고 초기화
        head = (node_ptr)malloc(sizeof(struct _node));
        head->num = 1;
        head->next = NULL;
    }
    else {  //비어있지 않으면 마지막 노드에 1을 가지는 노드 할당하고 초기화
        current->next = (node_ptr)malloc(sizeof(struct _node));
        current->next->num = 1;
        current->next->next = NULL; //마지막은 비워줌
    }

    return head;
}

void clean(node_ptr head) {
    node_ptr temp;

    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
    //각 노드를 메모리에서 해제
}