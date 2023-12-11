//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define SIZE 10
//
//int main() {
//	int N, M;
//	scanf("%d %d", &N, &M);
//	int arr[SIZE][SIZE] = { 0, };
//	int tran[SIZE][SIZE] = { 0, };
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			scanf("%d", &arr[i][j]);
//			tran[j][i] = arr[i][j];
//		}
//	}
//
//	for (int i = 0; i < M; i++) {
//		for (int j = 0; j < N; j++) {
//			printf("%d", tran[i][j]);
//			if (j < N-1 ) {
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//}