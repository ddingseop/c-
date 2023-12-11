#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct _fruit fruit_t;

struct _fruit {
    int price;
    char name[100];
};

fruit_t* find_both(int n, fruit_t* items, fruit_t** maxptr);

int main()
{
    fruit_t fruits[20] = {0};
    int n;
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++)
        scanf("%s %d", fruits[i].name, &fruits[i].price);

    fruit_t* maxptr, * sndptr;
    sndptr = find_both(n, fruits, &maxptr);
    printf("%s %d\n", maxptr->name, maxptr->price);
    printf("%s %d\n", sndptr->name, sndptr->price);
}

fruit_t* find_both(int n, fruit_t* items, fruit_t** maxptr) {
    int firstprice = 0;
    int secondprice = 0;
    fruit_t* firstf = NULL;
    fruit_t* secondf = NULL;
    for (int i = 0; i < n; i++) {
        if (items[i].price > firstprice) {
            secondprice = firstprice;
            secondf = firstf;

            firstprice = items[i].price;
            firstf = &items[i];
        }
        else if (items[i].price > secondprice) {
            secondprice = items[i].price;
            secondf = &items[i];
        }
    }
    *maxptr = firstf;
    return secondf;
}