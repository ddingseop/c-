#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _fruit fruit_t;

struct _fruit {
    char name[20];
    int price;
};

int compare(const void* x, const void* y);
fruit_t* read_fruits(FILE* fp, int n);
void write_fruits(FILE* fp, int n, fruit_t* fruits);

int main()
{
    int n; fscanf(stdin, "%d\n", &n); //���� �Է� �޾� ���� n�� ����
    fruit_t* fruits = read_fruits(stdin, n); //�Էµ� ���� ������ ���� ���� ���� ��� �迭 �Ҵ�
    qsort(fruits, n, sizeof(fruit_t), compare); 
    write_fruits(stdout, n, fruits);
}

int compare(const void* x, const void* y) {
    int price_diff = ((fruit_t*)y)->price - ((fruit_t*)x)->price;
    if (price_diff == 0) {  //������ ���� ���
        return strcmp(((fruit_t*)x)->name, ((fruit_t*)y)->name);   //���� �̸� ���������� ��
    }
    return price_diff;
}

fruit_t* read_fruits(FILE* fp, int n) {
    fruit_t* fruits = malloc(n * sizeof(fruit_t)); //�������� ������ �迭 �Ҵ�
    for (int i = 0; i < n; ++i) {
        fscanf(fp, "%s %d\n", fruits[i].name, &fruits[i].price);  //���Ͽ��� ���� ���� �о� �迭�� ����
    }
    return fruits;
}

void write_fruits(FILE* fp, int n, fruit_t* fruits) {
    for (int i = 0; i < n; ++i) {
        fprintf(fp, "%s %d\n", fruits[i].name, fruits[i].price); 
    }
}