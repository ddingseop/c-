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
    fread(&head, sizeof(int), 1, fp); //헤드에 과일데이터의 맨 처음 위치를 읽어옴
    fseek(fp, head * sizeof(fruit_t), SEEK_CUR); //헤드위치로 이동

    while (1) {
        fread(&fruit, sizeof(fruit_t), 1, fp); //현재 위치에서 과일 데이터 읽어옴
        printf("%s\n", fruit.name);
        if (fruit.offset == -1) {
            break; 
        }
        fseek(fp, fruit.offset * sizeof(fruit_t), SEEK_CUR); //다음노드로 이동
    }
}