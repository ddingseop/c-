//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//#define MAX 100
//
//int square[MAX][MAX];
//
///* Make n * n magic square in a 2-dimensional array, square[].
// * It is guaranteed that n is always odd.
// */
//void magic(int n);
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    magic(n);
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++)
//            printf("%d ", square[i][j]);
//        printf("\n");
//    }
//}
//
//void magic(int n) {
//    int row, col;
//    for (row = 0; row < n; row++) {
//        for (col = 0; col < n; col++) {
//            square[row][col] = 0;
//        }
//    }
//    row = 0;
//    col = n / 2;
//
//    for (int k = 1; k <= n * n; k++) {
//        square[row][col] = k;
//        row--;
//        col++;
//
//        if (row < 0) {
//            row = n - 1;
//        }
//        if (col == n) {
//            col = 0;
//        }
//        if (square[row][col] != 0) {
//            row += 2;
//            col--;
//            if (row >= n) {
//                row -= n;
//            }
//            if (col < 0) {
//                col = n - 1;
//            }
//        }
//    }
//}