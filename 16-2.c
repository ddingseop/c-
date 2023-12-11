#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 1000000

typedef struct _coord coord_t;
struct _coord {
    int x;
    int y;
};

coord_t points[MAX_SIZE];

int compare(const void*, const void*);

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d %d", &points[i].x, &points[i].y);
    qsort(points, n, sizeof(coord_t), compare);
    for (int i = 0; i < n; i++)
        printf("%d %d\n", points[i].x, points[i].y);
}

int compare(const void* a, const void* b) {
    const coord_t A = *(const coord_t*)a;
    const coord_t B = *(const coord_t*)b;

    if (A.x < B.x)
        return -1;
    else if (A.x > B.x)
        return 1;
    else {
        if (A.y > B.y)
            return -1;
        else if (A.y < B.y)
            return 1;
    }
    return 0; 
}