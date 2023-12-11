#include <iostream>
#include <string>

using namespace std;

typedef long long long_t;

class Complex {
public:
    long_t real;
    long_t imag;
    void mult(Complex* x);
    string toString();
};

string Complex::toString() {
    string s = "(";
    s += to_string(this->real);
    s += ") + (";
    s += to_string(this->imag);
    s += ")i";
    return s;
}

int main() {
    Complex a, b;
    cin >> a.real >> a.imag;
    cin >> b.real >> b.imag;
    a.mult(&b);
    cout << a.toString() << endl;
}

void Complex::mult(Complex* x) {
    long_t temp_real = (this->real * x->real) - (this->imag * x->imag);
    long_t temp_imag = (this->real * x->imag) + (this->imag * x->real);

    this->real = temp_real;
    this->imag = temp_imag;
}

