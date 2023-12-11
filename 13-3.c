#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int* mmmax(int n, int m, int p, int* ptr, int* a, int* b, int* c);

int main()
{
    int n, m, p;
    scanf("%d %d %d", &n, &m, &p);
    int A[SIZE][SIZE][SIZE];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            for (int k = 0; k < p; k++)
                scanf("%d", &A[i][j][k]);
    int i, j, k;
    int* maxptr = mmmax(n, m, p, &A[0][0][0], &i, &j, &k);
    printf("%d %d %d %d %d", *maxptr, A[i][j][k], i, j, k);
}

int* mmmax(int n, int m, int p, int* ptr, int* a, int* b, int* c)
{
    int max_val = *ptr;  
    int max_i = 0;              
    int max_j = 0;
    int max_k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < p; k++) {
                if (ptr[i*SIZE*SIZE+j*SIZE+k] > max_val) {
                    max_val = ptr[i * SIZE * SIZE + j * SIZE + k];
                    max_i = i;
                    max_j = j;
                    max_k = k;
                }
            }
        }
    }
    *a = max_i;
    *b = max_j;
    *c = max_k;
    return &ptr[*a * SIZE * SIZE + *b * SIZE + *c];
}