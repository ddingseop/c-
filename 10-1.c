//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//#define MAX 10000000
//
//int sieve[MAX + 1];
//
//void find_primes();
//
//int main()
//{
//    int N, M;
//    scanf("%d %d", &N, &M);
//    find_primes();
//    int cnt = 0;
//    for (int i = N; i <= M; i++)
//        if (sieve[i]) cnt++;
//    printf("%d", cnt);
//}
//
//void find_primes() {
//    for (int i = 0; i < MAX + 1; i++) {
//        sieve[i] = 1;
//        sieve[0] = 0;
//        sieve[1] = 0;
//    }
//    for (int i = 2; i <= sqrt(MAX+1); i++) {
//        if (sieve[i] == 1) {
//            for (int j = 2*i; j <= MAX+1; j+=i) {
//                sieve[j] = 0;
//            }
//        }
//    }
//}