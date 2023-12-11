#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int* find_largest(int n, int* ptr);

int main()
{
    int n, arr[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int* p = find_largest(n, arr);
    printf("%d", *p);
}

int* find_largest(int n, int* ptr) {
    int* largest = ptr; 
    for (int i = 1; i < n; i++) {
        if (ptr[i] > *largest) {
            largest = &ptr[i]; 
        }
    }
    return largest; 
}