//#include <stdio.h>
//
//int main() {
//	int x = 0x3FFFFFF;
//	char a = getchar()-'A';
//	getchar();
//	char b = getchar()-'A';
//	getchar();
//	char c = getchar()-'A';
//	getchar();
//	x &= ~(1 << a);  //1을 왼쪽으로 a비트만큼 이동 (&= ~)는 빼는거
//	x &= ~(1 << b);
//	x &= ~(1 << c);
//
//	printf("%07x", x);
//}