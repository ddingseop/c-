//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//#define MAX 100
//
//int square[MAX][MAX];
//
//int check(int n) {
//	int diagsum1 = 0;
//	int diagsum2 = 0;
//
//	for (int i = 0; i < n; i++) {
//		diagsum1 += square[i][i];  //대각선 합들
//	}
//	for (int i = 0; i < n; i++) {
//		diagsum2 += square[i][n - 1 - i];   //대각선 합들
//	}
//	if (diagsum1 != diagsum2) {
//		return 0;
//	}
//	int ans = diagsum1;
//	for (int i = 0; i < n; i++) {
//		int row = 0, col = 0;
//		for (int j = 0; j < n; j++) {
//			row += square[i][j];
//			col += square[j][i];
//			if (square[i][j] == square[i + 1][j + 1]) {
//				return 0;
//			}
//		}
//		if (row != ans || col != ans) {
//			return 0;
//		}
//	}
//	return ans;
//
//}
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			scanf("%d", &square[i][j]);
//		}
//	}
//	int ans = check(n);
//	printf("%d", ans);
//}

