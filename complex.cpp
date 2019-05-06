//
// Created by mikh- on 03.05.2019.
//

#include "complex.h"
#include <iostream>
void Complex::set_Complex() {
    std::cout << "Real part: ";
    std::cin >> Re;
    std::cout << "Imaginary part: ";
    std::cin >> Im;
};
void Complex::get_Complex() {
    std::cout << "Re: " << Re << std::endl;
    std::cout << "Im: " << Im << std::endl;
    std::cout << "Module: " << sqrt(Re*Re + Im*Im) << std::endl;
};
Complex::Complex(double Re, double Im): Re(Re), Im(Im) {};
Complex::Complex(const Complex &alt): Re(alt.Re), Im(alt.Im) {};
std::ostream &operator<<(std::ostream &out, const Complex &rv){
    return out << rv.Re << " + (" << rv.Im <<")";
};
std::istream &operator>>(std::istream &in, Complex &rv){
    std::cout << "Enter Re" << std::endl;
    in >> rv.Re;
    std::cout << "Enter Im" << std::endl;
    in >> rv.Im;
    return in;
};

