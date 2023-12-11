#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 100

int is_palindrome(char* s, char* t);

int main()
{
    int n; char str[SIZE];
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++)
        scanf("%c", &str[i]);
    printf(is_palindrome(str, str + n - 1) ? "yes" : "no");
}

int is_palindrome(char* s, char* t) {
    while (s < t) {
        if (*s != *t) {
            return 0; 
        }
        s++; 
        t--; 
    }
    return 1;
}