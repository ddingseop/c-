//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define MAX 100
//
//int N, A[MAX][MAX];
//
//void make_spiral() {
//    int n = 1; 
//    int row_start = 0, row_end = N - 1, col_start = 0, col_end = N - 1;
//
//    while (n <= N * N) {
//        for (int i = row_start; i <= row_end; i++) {
//            A[i][col_start] = n++;
//        }
//        col_start++;
//        for (int j = col_start; j <= col_end; j++) {
//            A[row_end][j] = n++;
//        }
//        row_end--;
//        for (int i = row_end; i >= row_start; i--) {
//            A[i][col_end] = n++;
//        }
//        col_end--;
//        for (int j = col_end; j >= col_start; j--) {
//            A[row_start][j] = n++;
//        }
//        row_start++;
//    }
//}
//
//int main() {
//    scanf("%d", &N);
//    make_spiral();
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++)
//            printf("%d ", A[i][j]);
//        printf("\n");
//    }
//    return 0;
//}