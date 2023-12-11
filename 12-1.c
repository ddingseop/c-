#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int* x, int* y);

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    swap(&x, &y);
    printf("%d %d\n", x, y);
}

void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
