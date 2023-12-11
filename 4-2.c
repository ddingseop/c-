//#include <stdio.h>
//
//int main() {
//	int a, b, c = 0;
//	scanf_s("%d %d %d", &a, &b, &c);
//	int x = a;
//	x = (x < b) ? b : x;
//	x = (x < c) ? c : x;
//	int y = a;
//	y = (y > b) ? b : y;
//	y = (y > c) ? c : y;
//	int cnt = 0;
//	cnt += (a % 2) == 0;
//	cnt += (b % 2) == 0;
//	cnt += (c % 2) == 0;
//	printf("%d %d\n", x, y);
//	printf("%d %d", 3 - cnt, cnt);
//}