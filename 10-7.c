//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//
//int is_palindrome(unsigned n);
//int is_prime(unsigned n);
//
//int main()
//{
//    unsigned N, M; scanf("%u %u", &N, &M);
//    int cnt = 0;
//    for (unsigned i = N; i <= M; i++) {
//        if (i == 0xFFFFFFFFu) break;
//        if (is_palindrome(i) && is_prime(i)) cnt++;
//    }
//    printf("%d\n", cnt);
//}
//
//int is_palindrome(unsigned n) {
//    unsigned int rev = 0, temp = n;
//    while (temp > 0) {
//        rev = rev * 10 + temp % 10;
//        temp = temp / 10;
//    }
//    return n == rev;
//}
//
//int is_prime(unsigned n) {
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