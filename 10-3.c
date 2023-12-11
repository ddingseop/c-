//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//
//unsigned factor_cnt = 0;
//unsigned factors[100];
//
//void factorize(unsigned n);
//
//int main()
//{
//    unsigned N;
//    scanf("%u", &N);
//    factorize(N);
//    for (int i = 0; i < factor_cnt; i++)
//        printf("%u ", factors[i]);
//}
//
//void factorize(unsigned n) {
//    while (n % 2 == 0) {
//        factors[factor_cnt++] = 2;
//        n /= 2;
//    }
//    for (int i = 3; i <= sqrt(n); i++) {
//        while (n % i == 0) {
//            factors[factor_cnt++] = i;
//            n /= i;
//        }
//    }
//    if (n > 1) {
//        factors[factor_cnt++] = n;
//    }
//}