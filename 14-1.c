#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void reverse(char* str);

int main()
{
    char str[100];
    gets(str);
    reverse(str);
    puts(str);
}

void reverse(char* str) {
    int length = strlen(str);
    int i=0, j=length-1;
    char temp;
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}