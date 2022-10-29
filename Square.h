//Header file for square which has the functions and overload functions. 
//Overloaded functions are made const for the reference and the variable.
#pragma once
#include <iostream>
using std::cin; using std::cout; using std::endl;
class Square
{
private:
	float length;
public:
	void setLength(float l);
	float getLength() const;
	float getArea() const;
	Square(float l = 0);

	Square operator+ (const Square&) const;
	Square operator* (const Square&) const;

};

