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
        if (head == NULL) { //����Ʈ ���������
            head = (node_ptr)malloc(sizeof(struct _node));  //��忡 ���ο� ��� �Ҵ�
            current = head;  //������� ����
        }
        else {
            current->next = (node_ptr)malloc(sizeof(struct _node)); //���� ��忡 ���ο� ��� �Ҵ�
            current = current->next; //���� ��� ������Ʈ
        }

        current->num = n;  //���� ����� ������ �ʵ忡 ���� ���� �Ҵ�

        if (n % 2 == 0) {
            n /= 2;
        }
        else {
            n = 3 * n + 1;
        }
    }

    if (head == NULL) {  //����Ʈ�� ������� ��� ��忡 1�� ������ ��� �Ҵ��ϰ� �ʱ�ȭ
        head = (node_ptr)malloc(sizeof(struct _node));
        head->num = 1;
        head->next = NULL;
    }
    else {  //������� ������ ������ ��忡 1�� ������ ��� �Ҵ��ϰ� �ʱ�ȭ
        current->next = (node_ptr)malloc(sizeof(struct _node));
        current->next->num = 1;
        current->next->next = NULL; //�������� �����
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
    //�� ��带 �޸𸮿��� ����
}