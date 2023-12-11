#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void bubbleSort(char words[][20], int cnts[], int cnt) {
    for (int i = 0; i < cnt - 1; i++) {
        for (int j = 0; j < cnt - i - 1; j++) {
            if (cnts[j] < cnts[j + 1]) {
                int tCount = cnts[j];
                cnts[j] = cnts[j + 1];
                cnts[j + 1] = tCount;

                char tWord[20];
                strcpy(tWord, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], tWord);
            }
            else if ((cnts[j] == cnts[j + 1])) {
                if (strcmp(words[j], words[j + 1]) > 0) {
                    int tCount = cnts[j];
                    cnts[j] = cnts[j + 1];
                    cnts[j + 1] = tCount;

                    char tWord[20];
                    strcpy(tWord, words[j]);
                    strcpy(words[j], words[j + 1]);
                    strcpy(words[j + 1], tWord);
                }
            }
        }
    }
}
int main() {
    int n;
    scanf("%d", &n);
    char words[100][20];
    int cnts[100] = { 0 }; 
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        char word[20];
        scanf("%s", word);

        int Index = -1;
        for (int j = 0; j < cnt; j++) {
            if (strcmp(words[j], word) == 0) {
                Index = j;
                break;
            }
        }
        if (Index != -1) {
            cnts[Index]++;
        }
        else {
            strcpy(words[cnt], word);
            cnts[cnt] = 1;
            cnt++;
        }
    }
    bubbleSort(words, cnts, cnt);
    for (int i = 0; i < cnt; i++) {
        printf("%d %s\n", cnts[i], words[i]);
    }
}
