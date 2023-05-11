#include <iostream>
#include "TComplex.h"

int main() {
    TComplex complex1(2, 3);
    TComplex complex2 = complex1();
    TComplex complex3 = complex1 + complex2;
    TComplex complex4 = complex1 - complex2;
    TComplex complex5 = complex1 * complex2;
    TComplex complex6 = complex1 / complex2;
    TComplex complex7 = complex1.conj();
    double absValue = complex1.abs();

    std::cout << "Complex 1: " << complex1 << std::endl;
    std::cout << "Complex 2: " << complex2 << std::endl;
    std::cout << "Complex 1 + Complex 2: " << complex3 << std::endl;
    std::cout << "Complex 1 - Complex 2: " << complex4 << std::endl;
    std::cout << "Complex 1 * Complex 2: " << complex5 << std::endl;
    std::cout << "Complex 1 / Complex 2: " << complex6 << std::endl;
    std::cout << "Conjugate of Complex 1: " << complex7 << std::endl;
    std::cout << "Absolute value of Complex 1: " << absValue << std::endl;
    return 0;
}
