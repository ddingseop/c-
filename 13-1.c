#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 100

int* mmax(int n, int m, int* x, int* a, int* b);

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int A[SIZE][SIZE];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &A[i][j]);
    int i, j;
    int* maxptr = mmax(n, m, &A[0][0], &i, &j);
    printf("%d %d %d %d", *maxptr, A[i][j], i, j);
}

int* mmax(int n, int m, int* x, int* a, int* b)
{
    int max = *x;
    int max_i = 0;
    int max_j = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (x[i * SIZE + j] > max) {
                max = x[i * SIZE + j];
                max_i = i;
                max_j = j;
            }
        }
    }
    *a = max_i;
    *b = max_j;
    return &x[max_i * SIZE + max_j];
}

int* mmax(int n, int m, int* x, int* a, int* b) {
    int *max = x;
    *a = 0;
    *b = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (*x > *max) {
                max = x;
                *a = i;
                *b = j;
            }
            x++;
        }
    }
    return max;
}

