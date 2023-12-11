#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 1000000

typedef struct _fruit fruit_t;
struct _fruit {
    char name[20];
    int price;
};

fruit_t fruits[MAX_SIZE];

int compare(const void*, const void*);

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%s %d", fruits[i].name, &fruits[i].price);
    qsort(fruits, n, sizeof(fruit_t), compare);
    for (int i = 0; i < n; i++)
        printf("%s %d\n", fruits[i].name, fruits[i].price);
}

int compare(const void* a, const void* b) {
        const fruit_t* A = (const fruit_t*)a;
        const fruit_t* B = (const fruit_t*)b;

        int lenA = strlen(A->name);
        int lenB = strlen(B->name);
        if (lenA < lenB)
            return -1;
        else if (lenA > lenB)
            return 1;

        int nameCompare = strcmp(A->name, B->name);
        if (nameCompare != 0)
            return nameCompare;

        if (A->price > B->price)
            return -1;
        else if (A->price < B->price)
            return 1;

        return 0;
}