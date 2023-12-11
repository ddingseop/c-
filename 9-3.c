//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//typedef unsigned long long long_t;
//
//int cnt = 0;
//
//void collatz(long_t n);
//
//int main()
//{
//    int N;
//    scanf("%d", &N);
//    collatz(N);
//    printf("\n%d", cnt);
//}
//
//void collatz(long_t n) {
//    cnt++;
//    if (n == 1) {
//        printf("1");
//    }
//    else if (n % 2 == 0) {
//        printf("%llu ", n);
//        collatz(n / 2);
//        
//    }
//    else {
//        printf("%llu ", n);
//        collatz(3 * n + 1);
//        
//    }
//}