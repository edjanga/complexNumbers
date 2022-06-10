#ifndef COMPLEXCLASS_H
#define COMPLEXCLASS_H

#pragma once

using namespace std;

class ComplexClass
{
    public:
        ComplexClass(float a = 0.0, float b = 0.0); // Constructor
        ~ComplexClass(); // Deconstructor
        void setReal(float a);
        void setImaginary(float b);
        float getReal();
        float getImaginary();
        float modulus();
        float argument();
        // friend method --> needed to overload << operator
        friend ostream& operator<<(ostream& COUT, const ComplexClass& complexNumber);
        friend ComplexClass operator+(ComplexClass& complexNumber1, ComplexClass& complexNumber2);
        friend ComplexClass operator-(ComplexClass& complexNumber1, ComplexClass& complexNumber2);
        friend ComplexClass operator*(ComplexClass& complexNumber1, ComplexClass& complexNumber2);
        friend ComplexClass operator/(ComplexClass& complexNumber1, ComplexClass& complexNumber2);
        friend bool operator==(ComplexClass& complexNumber1, ComplexClass& complexNumber2);
        friend bool operator!=(ComplexClass& complexNumber1, ComplexClass& complexNumber2);
        friend bool operator>(ComplexClass& complexNumber1, ComplexClass& complexNumber2);
        friend bool operator<(ComplexClass& complexNumber1, ComplexClass& complexNumber2);
        friend bool operator>=(ComplexClass& complexNumber1, ComplexClass& complexNumber2);
        friend bool operator<=(ComplexClass& complexNumber1, ComplexClass& complexNumber2);


    private:
        float real;
        float imaginary;

};
// List of operator overloadings
/*ostream& operator<<(ostream& COUT, const ComplexClass& complexNumber);
ComplexClass operator+(ComplexClass& complexNumber1, ComplexClass& complexNumber2);
ComplexClass operator-(ComplexClass& complexNumber1, ComplexClass& complexNumber2);
ComplexClass operator*(ComplexClass& complexNumber1, ComplexClass& complexNumber2);
ComplexClass operator/(ComplexClass& complexNumber1, ComplexClass& complexNumber2);
bool operator==(ComplexClass& complexNumber1, ComplexClass& complexNumber2);
bool operator!=(ComplexClass& complexNumber1, ComplexClass& complexNumber2);
bool operator>(ComplexClass& complexNumber1, ComplexClass& complexNumber2);
bool operator<(ComplexClass& complexNumber1, ComplexClass& complexNumber2);
bool operator>=(ComplexClass& complexNumber1, ComplexClass& complexNumber2);
bool operator<=(ComplexClass& complexNumber1, ComplexClass& complexNumber2);*/


#endif