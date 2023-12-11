#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct _fruit fruit_t;

struct _fruit {
    int price;
    char name[100];
};

fruit_t* find_second(int n, fruit_t* items);

int main()
{
    fruit_t fruits[20];
    int n;
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++)
        scanf("%s %d", fruits[i].name, &fruits[i].price);

    fruit_t* sndptr = find_second(n, fruits);
    printf("%s %d\n", sndptr->name, sndptr->price);
}

fruit_t* find_second(int n, fruit_t* items) {
    int firstprice = 0;
    int secondprice = 0;
    fruit_t* firstf=NULL;
    fruit_t* secondf=NULL;
    for (int i = 0; i < n; i++) {
        if (items[i].price > firstprice) {
            secondprice = firstprice;  //두번째 큰수에 기존값 넣기
            secondf = firstf;

            firstprice = items[i].price;  //가장큰수 새로 초기화
            firstf = &items[i];
        }
        else if (items[i].price > secondprice) {
            secondprice = items[i].price;  //두번째 큰수 설정
            secondf = &items[i];         
        }
    }

    return secondf;
}

