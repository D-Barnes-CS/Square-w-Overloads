// Lab11_DBarnes.cpp : 3 Square objects which will be given a length for the square
// With the given information we will display the sum of the two square lengths or
// the average of the two squares. We use the overload operator to get the 
// values we want. 

#include "Square.h"

int main()
{
    Square s1, s2, s3;
    float length;
    cout << "Please give me a length of the first square: ";
    cin >> length; s1.setLength(length); cout << endl;
    cout << "Please give me a length of the second square: ";
    cin >> length; s2.setLength(length); cout << endl;
    s3 = s1 + s2; cout << s3.getLength();
    cout << " is the sum of both square lengths." << endl;
    s3 = s1 * s2; cout << s3.getArea();
    cout << " is the average of both square lengths." << endl;

}

