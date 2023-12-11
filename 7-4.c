//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//#define SIZE 10
//int main() {
//	int N, M;
//	scanf("%d %d", &N, &M);
//
//	int A[SIZE][SIZE];
//	int B[SIZE][SIZE];
//	int C[SIZE][SIZE];
//	int X[SIZE][SIZE];
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			scanf("%d", &A[i][j]);
//		}
//	}
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			scanf("%d", &B[i][j]);
//		}
//	}
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			scanf("%d", &C[i][j]);
//		}
//	}
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			X[i][j] = A[i][j] + B[i][j] - C[i][j];
//			printf("%d", X[i][j]);
//			if (j < N - 1) {
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//}