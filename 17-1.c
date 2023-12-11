#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct _complex complex_t;
typedef struct _complex* complex_ptr;

struct _complex {
    float real;
    float imag;
};

complex_ptr cmult(complex_t a, complex_t b);
complex_ptr cdiv(complex_ptr a, complex_ptr b);

int main()
{
    complex_t a, b; complex_ptr c;
    scanf("%f %f\n", &a.real, &a.imag);
    scanf("%f %f\n", &b.real, &b.imag);
    c = cmult(a, b);
    printf("(%.3f) + (%.3f)i\n", c->real, c->imag);
    free(c);
    c = cdiv(&a, &b);
    printf("(%.3f) + (%.3f)i\n", c->real, c->imag);
    free(c);
}

complex_ptr cmult(complex_t a, complex_t b) {
    complex_ptr result = (complex_ptr)malloc(sizeof(complex_t));
    result->real = a.real * b.real - a.imag * b.imag;
    result->imag = a.real * b.imag + a.imag * b.real;

    return result;
}

complex_ptr cdiv(complex_ptr a, complex_ptr b) {
    complex_ptr result = (complex_ptr)malloc(sizeof(complex_t));
    float denominator = b->real * b->real + b->imag * b->imag;
    result->real = (a->real * b->real + a->imag * b->imag) / denominator;
    result->imag = (a->imag * b->real - a->real * b->imag) / denominator;

    return result;
}
