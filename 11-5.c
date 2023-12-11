//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define MAX 10
//
//void swap(int a[], int i, int j);
//void bubblesort(int n, int a[]);
//
///* converts decimal digits into array a[] */
//int scan(int n, int a[]);
//
///* returns 1 if all the elements of a[] and b[]
// * are equal in the range from 0 to n - 1.
// * returns 0, otherwise.
// */
//int comp(int n, int a[], int b[]);
//
//int main()
//{
//    int n, t, m, a[MAX], b[MAX], cnt = 0;
//    scanf("%d", &n);
//    int len = scan(n, a);
//    bubblesort(len, a);
//    scanf("%d", &t);
//    for (int i = 0; i < t; i++) {
//        scanf("%d", &m);
//        int lenm = scan(m, b);
//        bubblesort(lenm, b);
//        if (len == lenm && comp(len, a, b))
//            cnt++;
//    }
//    printf("%d", cnt);
//}
//
//void swap(int a[], int i, int j) {
//    int temp = a[i];
//    a[i] = a[j];
//    a[j] = temp;
//}
//
//void bubblesort(int n, int a[]) {
//    for (int i = 0; i < n - 1; i++) {
//        for (int j = 0; j < n - 1 - i; j++) {
//            if (a[j] > a[j + 1]) {
//                swap(a, j, j + 1);
//            }
//        }
//    }
//}
//
//int scan(int n, int a[]) {
//    int len = 0;
//    while (n > 0) {
//        a[len] = n % 10;
//        n /= 10;
//        len++;
//    }
//    return len;
//}
//
//int comp(int n, int a[], int b[]) {
//    for (int i = 0; i < n; i++) {
//        if (a[i] != b[i]) {
//            return 0;
//        }
//    }
//    return 1;
//}