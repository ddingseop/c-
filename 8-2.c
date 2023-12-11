//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//
//typedef unsigned long long ulong_t;
//typedef unsigned int uint_t;
//
//uint_t divcnt(uint_t n);
//void solve(uint_t N, uint_t M);
//
//int main()
//{
//    uint_t N, M;
//    scanf("%u %u", &N, &M);
//    solve(N, M);
//}
//
//uint_t divcnt(uint_t n) {
//    ulong_t cnt = 0;
//    for (ulong_t i = 1; i * i <= n; i++) {
//        if (i * i == n) {
//            cnt++;
//        }
//        else if (n % i == 0) {
//            cnt += 2;
//        }
//    }
//    return cnt;
//}
//
//void solve(uint_t N, uint_t M) {
//    ulong_t x = 0;
//    ulong_t max = 0;
//    for (ulong_t i = N; i <= M; i++) {
//        if (divcnt(i) >= max) {
//            max = divcnt(i);
//            x = i;
//        }
//
//    }
//    printf("%llu\n", x);
//    printf("%llu", max);
//}
