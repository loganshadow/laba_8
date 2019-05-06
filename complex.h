//
// Created by mikh- on 03.05.2019.
//

#ifndef LABA_4_COMPLEX_H
#define LABA_4_COMPLEX_H

#include <iosfwd>

class Complex {
private:
    double Re;
    double Im;
public:
    Complex(double Re = 0, double Im = 0);
    friend std::ostream &operator<<(std::ostream &out, Complex const &rv);
    friend std::istream &operator>>(std::istream &in, Complex &rv);
    Complex(const Complex &alt);
    ~Complex() {};
    void set_Complex();
    void get_Complex();
};
#endif //LABA_4_COMPLEX_H
