//#include <stdio.h>
//
//int main() {
//	char ch = getchar();
//	int cnt = 0;
//	cnt += ((ch & 1) == 0);
//	cnt += (((ch >> 1) & 1) == 0);
//	cnt += (((ch >> 2) & 1) == 0);
//	cnt += (((ch >> 3) & 1) == 0);
//	cnt += (((ch >> 4) & 1) == 0);
//	cnt += (((ch >> 5) & 1) == 0);
//	cnt += (((ch >> 6) & 1) == 0);
//	cnt += (((ch >> 7) & 1) == 0);
//	printf("%d\n", ch);
//	printf("%#x\n", ch);
//	printf("%d", 8-cnt);
//}