#include <iostream>
#include "ComplexClass.cpp"

using namespace std;

int main(){

    float real1, real2, img1, img2;
    cout << "Enter the real parts of two complex numbers: " << endl;
    cin >> real1 >> real2;
    cout << "Enter the imaginary parts of two complex numbers: " << endl;
    cin >> img1 >> img2;
    ComplexClass test1(real1,img1);
    ComplexClass test2(real2,img2);
    cout << "Modulus of complex number 1: " << test1.modulus() << endl;
    cout << "Modulus of complex number 2: " << test2.modulus() << endl;
    cout << "Argument of complex number 1: " << test1.argument() << endl;
    cout << "Argument of complex number 2: " << test2.argument() << endl;
    cout << boolalpha;
    cout << "Is complex number 1 strictly greater than complex number 2: " << (test1>test2) << endl;
    cout << "Is complex number 1 greater than complex number 2: " << (test1>=test2) << endl;
    cout << "Is complex number 1 strictly smaller than complex number 2: " << (test1<test2) << endl;
    cout << "Is complex number 1 smaller than complex number 2: " << (test1<=test2) << endl;
    cout << "Is complex number 1 equal complex number 2: " << (test1==test2) << endl;
    return 0;
}