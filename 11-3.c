//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//typedef long long lont_t;
//
///* muliplies two matrices A and B into a matrix C */
//void mult(lont_t A[][2], lont_t B[][2], lont_t C[][2]);
//
///* powers a matrix A with exponent n into a matrix B */
//void power(int n, lont_t A[][2], lont_t B[][2]);
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    lont_t A[2][2], B[2][2];
//    scanf("%lld %lld %lld %lld", &A[0][0], &A[0][1], &A[1][0], &A[1][1]);
//    power(n, A, B);
//    printf("%lld %lld \n%lld %lld ", B[0][0], B[0][1], B[1][0], B[1][1]);
//}

//void mult(lont_t A[][2], lont_t B[][2], lont_t C[][2]) {
//    for (int i = 0; i < 2; i++) {
//        for (int j = 0; j < 2; j++) {
//            C[i][j] = 0;
//            for (int k = 0; k < 2; k++) {
//                C[i][j] += A[i][k] * B[k][j];
//            }
//        }
//    }
//}
//
//void power(int n, lont_t A[][2], lont_t B[][2]) {
//    if (n == 1) {
//        B[0][0] = A[0][0];
//        B[0][1] = A[0][1];
//        B[1][0] = A[1][0];
//        B[1][1] = A[1][1];
//    }
//    else {
//        lont_t T[2][2];
//        power(n - 1, A, T); //재귀적으로 A의 (N-1) 거듭제곱을 T 행렬에 저장
//        mult(A, T, B);  //T 행렬에 A를 곱하여 B에 저장합니다.
//    }
//}

