#pragma once

class Number {
public:
	Number() = default;
	Number(double number);

	Number operator+(Number a);
	Number operator*(Number a);
	Number operator-(Number a);
    Number operator/(Number a);

	double getNumber();

private:
	double num;
private:
	
};

Number createNumber(double a);

const Number ZERO = Number(0);
const Number ONE = Number(1);