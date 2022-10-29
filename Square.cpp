#include "Square.h"

void Square::setLength(float l)
{
	length = l;
}

float Square::getLength() const
{
	return length;
}
// to get the average we take the length and divide it by two. This function is only used when we are given two
// square objects and make a separate that holds the value for both. 
float Square::getArea() const
{
	return length/2;
}

Square::Square(float l)
{
	setLength(l);
}

Square Square::operator+(const Square& square) const
{
	Square sqare; 
	sqare.length = length + square.length;
	return sqare;
}

Square Square::operator*(const Square& square) const
{
	Square sqare;
	sqare.length = length + square.length;
	return sqare;
}
