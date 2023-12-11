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
    int n; fscanf(stdin, "%d\n", &n); //정수 입력 받아 변수 n에 저장
    fruit_t* fruits = read_fruits(stdin, n); //입력된 정수 개수에 따라 과일 정보 담는 배열 할당
    qsort(fruits, n, sizeof(fruit_t), compare); 
    write_fruits(stdout, n, fruits);
}

int compare(const void* x, const void* y) {
    int price_diff = ((fruit_t*)y)->price - ((fruit_t*)x)->price;
    if (price_diff == 0) {  //가격이 같은 경우
        return strcmp(((fruit_t*)x)->name, ((fruit_t*)y)->name);   //과일 이름 사전순으로 비교
    }
    return price_diff;
}

fruit_t* read_fruits(FILE* fp, int n) {
    fruit_t* fruits = malloc(n * sizeof(fruit_t)); //과일정보 저장할 배열 할당
    for (int i = 0; i < n; ++i) {
        fscanf(fp, "%s %d\n", fruits[i].name, &fruits[i].price);  //파일에서 과일 정보 읽어 배열에 저장
    }
    return fruits;
}

void write_fruits(FILE* fp, int n, fruit_t* fruits) {
    for (int i = 0; i < n; ++i) {
        fprintf(fp, "%s %d\n", fruits[i].name, fruits[i].price); 
    }
}