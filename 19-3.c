#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _fruit fruit_t;

struct _fruit {
    char name[20];
    int offset;
};

void traverse_fruits(FILE* fp);

int main()
{
    traverse_fruits(stdin);
}

void traverse_fruits(FILE* fp) {
    int head;
    fruit_t fruit;
    fread(&head, sizeof(int), 1, fp); //��忡 ���ϵ������� �� ó�� ��ġ�� �о��
    fseek(fp, head * sizeof(fruit_t), SEEK_CUR); //�����ġ�� �̵�

    while (1) {
        fread(&fruit, sizeof(fruit_t), 1, fp); //���� ��ġ���� ���� ������ �о��
        printf("%s\n", fruit.name);
        if (fruit.offset == -1) {
            break; 
        }
        fseek(fp, fruit.offset * sizeof(fruit_t), SEEK_CUR); //�������� �̵�
    }
}