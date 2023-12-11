//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//#define SIZE 1024
//
//int main() {
//	int N = 0;
//	scanf("%d", &N);
//	char arr[SIZE];
//	int cnt[26] = { 0, };
//	scanf("%s", arr);
//	for (int i = 0; i < strlen(arr); i++) {
//		cnt[arr[i] - 'A']++;
//	}
//	int max = cnt[0];
//	for (int i = 0; i < 26; i++) {
//		if (max < cnt[i]) {
//			max = cnt[i];
//		}
//
//	}
//	for (int i = 0; i < 26; i++) {
//		if (max == cnt[i]) {
//			printf("%d\n", i + 'A');
//		}
//	}
//}
