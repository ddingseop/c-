#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 1000000

int arr[MAX_SIZE];

int compare(const void*, const void*);

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    qsort(&arr[0], n, sizeof(int), compare);
    for (int i = 0; i < n; i++)
        printf("%d\n", arr[i]);
}

int compare(const void* a, const void* b) {
    if (*(int*)a > *(int*)b)
        return 1;
    else if (*(int*)a < *(int*)b)
        return -1;
    else
        return 0;
}