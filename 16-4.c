#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double add(double x, double y);
double sub(double x, double y);
double mul(double x, double y);
double div(double x, double y);

void* which_function(char op);

int main()
{
    int n;
    double a, b;
    char op;
    double (*f)(double x, double y);

    scanf("%d", &n);
    while (n--) {
        scanf("%lf %c %lf", &a, &op, &b);
        f = which_function(op);
        printf("%.4lf\n", f(a, b));
    }
}

double add(double x, double y) {
    return x + y;
}

double sub(double x, double y) {
    return x - y;
}

double mul(double x, double y) {
    return x * y;
}

double div(double x, double y) {
    return x / y;
}
void *which_function(char op) {
    switch (op) {
    case '+':
        return add;
    case '-':
        return sub;
    case '*':
        return mul;
    case '/':
        return div;
    }
}