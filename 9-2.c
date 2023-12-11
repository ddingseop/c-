//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//typedef unsigned long long ull_t;
//
//ull_t gcd(ull_t n, ull_t m);
//ull_t lcm(ull_t n, ull_t m);
//ull_t solve(int n);
//
//int main()
//{
//    int N;
//    scanf("%d", &N);
//    printf("%llu", solve(N));
//}
//
//ull_t gcd(ull_t n, ull_t m) {
//    if (m == 0) {
//        return n;
//    }
//    else {
//        return gcd(m, n % m);
//    }
//}
//
//ull_t lcm(ull_t n, ull_t m) {
//    return n * m / gcd(n, m);
//}
//
//ull_t solve(int n) {
//    ull_t arr[1000];
//    for (int i = 0; i < n; i++) {
//        scanf("%llu",&arr[i]);
//    }
//    ull_t x = arr[0];
//    for (int i = 1; i < n; i++) {
//        x = lcm(x, arr[i]);
//    }
//    return x;
//}