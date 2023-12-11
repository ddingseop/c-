//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int num = 0;
//int mdepth = 1;
//
//int ackermawn(int n, int m,int depth) {
//	num++;
//	if (mdepth < depth)
//		mdepth = depth;
//	if (n == 0) {
//		return m + 1;
//	}
//	else if (n > 0 && m == 0) {
//		return ackermawn(n - 1, 1,depth+1);
//	}
//	else {
//		return ackermawn(n - 1, ackermawn(n, m - 1,depth+1),depth+1);
//	}
//}
//
//int main() {
//	int n, m;
//	scanf("%d %d", &n, &m);
//	printf("%d\n", ackermawn(n, m,mdepth));
//	printf("%d\n", num);
//	printf("%d", mdepth);
//}