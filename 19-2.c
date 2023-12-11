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
void read_fruits(FILE* fp, int* n, fruit_t** fruits);
void write_fruits(FILE* fp, int n, fruit_t* fruits);

int main()
{
    int n; fruit_t* fruits;
    read_fruits(stdin, &n, &fruits);
    qsort(fruits, n, sizeof(fruit_t), compare);
    write_fruits(stdout, n, fruits);
}

int compare(const void* x, const void* y) {
    int price_diff = ((fruit_t*)y)->price - ((fruit_t*)x)->price;
    if (price_diff == 0) {
        return strcmp(((fruit_t*)x)->name, ((fruit_t*)y)->name);
    }
    return price_diff;
}

void read_fruits(FILE* fp, int* n, fruit_t** fruits) {
    fread(n, sizeof(int), 1, fp);  //n에 파일에 저장된 과일데이터 총개수 저장
    *fruits = malloc((*n) * sizeof(fruit_t)); //과일개수에 맞게 과일정보 담는 배열 할당
    fread(*fruits, sizeof(fruit_t), *n, fp); //할당한 배열에 과일 데이터 저장
}

void write_fruits(FILE* fp, int n, fruit_t* fruits) {
    for (int i = 0; i < n; ++i) {
        fprintf(fp, "%s %d\n", fruits[i].name, fruits[i].price);
    }
}