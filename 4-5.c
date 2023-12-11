//#include <stdio.h>
//
//int main() {
//	char a, b;
//	scanf_s("%c %c", &a,1, &b,1);
//	/*a = getchar();
//	getchar();
//	b = getchar();*/
//	char c = a ^ b;
//	int hd = 0;
//	hd += (c & (1 << 0)) ? 1 : 0;
//	hd += (c & (1 << 1)) ? 1 : 0;
//	hd += (c & (1 << 2)) ? 1 : 0;	
//	hd += (c & (1 << 3)) ? 1 : 0;
//	hd += (c & (1 << 4)) ? 1 : 0;
//	hd += (c & (1 << 5)) ? 1 : 0;
//	hd += (c & (1 << 6)) ? 1 : 0;
//	hd += (c & (1 << 7)) ? 1 : 0;
//
//	printf("%d", hd);
//}