//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int is_palindrome(unsigned n);
//
//int main()
//{
//    unsigned T; scanf("%u", &T);
//    while (T--) {
//        unsigned n; scanf("%u", &n);
//        is_palindrome(n) ? printf("yes\n") : printf("no\n");
//    }
//}
//
//int is_palindrome(unsigned n) {
//    int binary[32] = { 0 };
//    int index = 0;
//    while (n > 0) {
//        binary[index++] = n % 2;
//        n /= 2;
//    }
//    int len = index;
//    for (int i = 0; i < len / 2; i++) {
//        if (binary[i] != binary[32 - i - 1]) {
//            return 0; 
//        }
//    }
//    return 1; 
//}

