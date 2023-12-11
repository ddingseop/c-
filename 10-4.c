//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//
//typedef unsigned long long long_t;
//
///* returns the sum of factors*/
//long_t sum_factors(long_t n);
//
//int main()
//{
//    long_t n, m, maxcnt, maxval;
//    scanf("%llu %llu", &n, &m);
//    maxcnt = maxval = 0;
//    for (long_t i = n; i <= m; i++) {
//        long_t s = sum_factors(i);
//        if (s > maxcnt) {
//            maxcnt = s;
//            maxval = i;
//        }
//    }
//    printf("%llu\n", maxval);
//    printf("%llu", maxcnt);
//}
//
//long_t sum_factors(long_t n) {
//    long_t sum = 0;
//    int is_prime = 1;
//    for (long_t i = 2; i <= sqrt(n); i++) {
//        if (n % i == 0) {
//            is_prime = 0;
//            break;
//        }
//    }
//    if (is_prime) {
//        return 0; 
//    }
//    for (long_t i = 2; i <= sqrt(n); i++) {
//        while (n % i == 0) {
//            sum += i;
//            n /= i;
//        }
//    }
//    if (n > 1) {
//        sum += n;
//    }
//    return sum;
//}
//long_t sum_factors(long_t n) {
//    long_t sum = 0;
//    while (n % 2 == 0) {
//        sum += 2;
//        n /= 2;
//    }
//    for (long_t i = 3; i <= sqrt(n); i += 2) {
//        while (n % i == 0) {
//            sum += i;
//            n /= i;
//        }
//    }
//    if (n > 1) {
//        sum += n;
//    }
//    if (sum == n) {
//        sum = 0;
//    }
//    return sum;
//}