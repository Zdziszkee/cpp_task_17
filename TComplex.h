//
// Created by Kacper Kuchta on 5/11/23.
//

#ifndef CPP_TASK_17_TCOMPLEX_H
#define CPP_TASK_17_TCOMPLEX_H


#include <ostream>

class TComplex {
public:
    TComplex(double re, double im) : re(re), im(im) {} // constructor with member initializer list

    TComplex operator()() const {
        return TComplex(re, im);
    }

    TComplex operator+(const TComplex& other) const {
        return TComplex(re + other.re, im + other.im);
    }

    TComplex operator-(const TComplex& other) const {
        return TComplex(re - other.re, im - other.im);
    }

    TComplex operator*(const TComplex& other) const {
        double resultRe = re * other.re - im * other.im;
        double resultIm = re * other.im + im * other.re;
        return TComplex(resultRe, resultIm);
    }

    TComplex operator/(const TComplex& other) const {
        double denominator = other.re * other.re + other.im * other.im;
        double resultRe = (re * other.re + im * other.im) / denominator;
        double resultIm = (im * other.re - re * other.im) / denominator;
        return TComplex(resultRe, resultIm);
    }

    TComplex conj() const {
        return TComplex(re, -im);
    }

    double abs() const {
        return std::sqrt(re * re + im * im);
    }

    friend std::ostream& operator<<(std::ostream& os, const TComplex& complex) {
        os << "(" << complex.re << "," << complex.im << ")";
        return os;
    }
private:
    double re{0}, im{0};
};

#endif //CPP_TASK_17_TCOMPLEX_H
