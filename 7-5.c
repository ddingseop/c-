//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int N, M, K;
//	scanf("%d %d %d", &N, &K, &M);
//
//	int A[10][10];
//	int B[10][10];
//	int C[10][10];
//
//	for (int i = 0; i < N; i++) {
//		for (int k = 0; k < K; k++) {
//			scanf("%d", &A[i][k]);
//		}
//	}
//	for (int k = 0; k < K; k++) {
//		for (int j = 0; j < M; j++) {
//			scanf("%d", &B[k][j]);
//		}
//	}
//	
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			C[i][j] = 0;
//			for (int k = 0; k < K; k++) {
//				C[i][j] += A[i][k] * B[k][j];
//			}
//		}
//	}
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			printf("%d", C[i][j]);
//			if (j < M - 1) {
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//}