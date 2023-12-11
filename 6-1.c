//#include <stdio.h>
//
//int main() {
//	typedef unsigned long long long_t;
//
//	long_t n;
//	scanf_s("%llu", &n);
//	while (n % 10 == 0) {  //마지막 숫자 0인경우
//		n /= 10;
//	}
//	while (n > 0) {
//		printf("%llu", n % 10);
//		n /= 10;
//	}
//}