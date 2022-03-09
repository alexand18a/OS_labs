#include "Number.h"

Number::Number(double number):num(number) {}

Number Number::operator+(Number b) {
    return Number(num + b.num);
}

Number Number::operator*(Number b) {
    return Number(num * b.num);
}

Number Number::operator-(Number b) {
    return Number(num - b.num);
}

Number Number::operator/(Number b) {
    return Number(num / b.num);
}

double Number::getNumber() {
    return this->num;
}

Number createNumber(double a) {
    return Number(a);
}
