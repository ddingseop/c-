//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//
//int is_prime(unsigned int n);
//unsigned int solve(unsigned int N);
//
//int main()
//{
//    unsigned int N;
//    scanf("%d", &N);
//    printf("%X\n", solve(N));
//}
//
//int is_prime(unsigned int n) {
//    if (n < 2) {
//        return 0;
//    }
//    for (long long i = 2; i * i <= n; i++) {
//        if (n % i == 0) {
//            return 0;
//        }
//    }
//    return 1;
//}
//
//unsigned int solve(unsigned int N) {
//    int binary = 0;
//    for (int i = 1; i <= N; i++) {
//        int num;
//        scanf("%d", &num);
//        if (is_prime(num)) {
//            binary = (binary << 1) | 1; //num이 소수인 경우에 1로
//        }
//        else {
//            binary = binary << 1;  //소수가 아닌경우 0으로
//        }
//    }
//    return binary;
//}

