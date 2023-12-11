//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//#define MAX 1000000
//
//int sieve[MAX + 1];
//
//void find_primes();
//int count(int n);
//void solve(int n);
//
//int main()
//{
//    int N;
//    scanf("%d", &N);
//    find_primes();
//    solve(N);
//}
//
//int count(int n) {
//    int cnt = 0;
//    for (int i = 3; i <= n / 2; i++) {
//        if (sieve[i] && sieve[n - i])
//            cnt++;
//    }
//    return cnt;
//}
//
//void solve(int n) {
//    int cnt = count(n);
//    if (cnt >= 100) {
//        printf("%d", cnt);
//    }
//    else {
//        for (int i = 3; i <= n / 2; i++) {
//            if (sieve[i] && sieve[n - i]) {
//                printf("%d %d\n", i, n - i);
//            }
//        }
//    }
//}
//
//void find_primes() {
//    sieve[0] = 0;
//    sieve[1] = 0;
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