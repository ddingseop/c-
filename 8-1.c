//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//
//typedef unsigned long long ull_t;
//
//ull_t divsum(ull_t n);
//
//int main()
//{
//    ull_t N;
//    scanf("%llu", &N);
//    printf("%llu", divsum(N));
//}
//
//ull_t divsum(ull_t n) {
//    ull_t sum = 0;
//    for (ull_t i = 1; i*i <= n; i++) {
//        if (i * i == n) {
//            sum += i;  //제곱수 
//        }
//        else if (n % i == 0) {
//            sum += i + (n / i);   //약수 2개 
//        }
//    }
//    return sum;
//}