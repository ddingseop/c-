#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct _coord coord_t;

struct _coord {
    int x;
    int y;
};

void bubblesort(int n, coord_t* point);
int compare(coord_t x, coord_t y);
void swap(coord_t* x, coord_t* y);

int main()
{
    int n;
    scanf("%d", &n);
    coord_t point[100];
    for (int i = 0; i < n; i++)
        scanf("%d %d", &point[i].x, &point[i].y);
    bubblesort(n, point);
    for (int i = 0; i < n; i++)
        printf("%d %d\n", point[i].x, point[i].y);
}

void bubblesort(int n, coord_t* point) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n -i - 1; j++) {
            if (compare(point[j], point[j+1]) < 0) {
                swap(&point[j], &point[j+1]);
            }
        }
    }
}

int compare(coord_t x, coord_t y) {
    if (x.x < y.x || (x.x == y.x && x.y > y.y)) //x좌표 비교, 같다면 y좌표 큰순
        return 1;
    else
        return -1;
}

void swap(coord_t* x, coord_t* y) {
    coord_t t = *x;
    *x = *y;
    *y = t;
}