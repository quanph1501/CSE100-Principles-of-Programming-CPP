//***********************************************************
// Name: Tom Phan
// Title: Fraction.cpp
// Description: Fraction class methods
// Date: 10/30/2026
//***********************************************************

#include "Fraction.h"

Fraction::Fraction(int n, int d) {
    numerator = n;
    denominator = d;
    //simplify();
}
string Fraction::toString() {
    if (denominator == 1) return std::to_string(numerator);
    if (numerator == 0) return "0";
    return std::to_string(numerator) + "/" + std::to_string(denominator);
}
int Fraction::gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (a != 0 && b != 0) {
        if (a > b) a -= b;
        else b -= a;
    }
    return (a == 0) ? b : a;
}
void Fraction::simplify() {
    if (denominator < 0) {
        numerator = -numerator;
        denominator = -denominator;
    }
    int simplifier = gcd(numerator, denominator);
    numerator /= simplifier;
    denominator /= simplifier;
}
void Fraction::multiply(Fraction b) { 
    numerator = numerator * b.numerator;
    denominator = denominator * b.denominator;
    simplify();
}
void Fraction::divide(Fraction b) {
    numerator = numerator * b.denominator;
    denominator = denominator * b.numerator;
    simplify();
}
void Fraction::add(Fraction b) {
    numerator = numerator * b.denominator + denominator * b.numerator;
    denominator = denominator * b.denominator;
    simplify();
}
void Fraction::subtract(Fraction b) {
    numerator = numerator * b.denominator - denominator * b.numerator;
    denominator = denominator * b.denominator;
    simplify();
}