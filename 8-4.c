//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//
//int is_prime(unsigned int n);
//int prime_cnt(int N, int M);
//
//int main()
//{
//    int N, M;
//    scanf("%d %d\n", &N, &M);
//    printf("%d\n", prime_cnt(N, M));
//}
//int is_prime(unsigned int n) {
//    for (int i = 2; i * i <= n; i++) {
//        if (n % i == 0) {
//            return 0;
//        }
//    }
//    return 1;
//}
//
//int prime_cnt(int N, int M) {
//    int cnt = 0;
//    for (int i = N; i <= M; i++) {
//        if (is_prime(i)==1) {
//            cnt++;
//        }
//    }
//    if (N == 1) {
//        cnt--;
//    }
//    return cnt;
//}