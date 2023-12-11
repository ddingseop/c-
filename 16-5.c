#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double (*farr[4])(double x, double y);

double add(double x, double y);
double sub(double x, double y);
double mul(double x, double y);
double div(double x, double y);

void which_function();

int main()
{
    int n;
    double a, b;
    char op;
    double (*f)(double x, double y);

    which_function();

    scanf("%d", &n);
    while (n--) {
        scanf("%lf %c %lf", &a, &op, &b);
        switch (op) {
        case '+': f = farr[0]; break;
        case '-': f = farr[1]; break;
        case '*': f = farr[2]; break;
        case '/': f = farr[3]; break;
        }
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

void which_function() {
    farr[0] = add;
    farr[1] = sub;
    farr[2] = mul;
    farr[3] = div;
}