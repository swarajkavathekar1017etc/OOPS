#include <iostream>
using namespace std;
class Complex {
float real, imag;
public:
Complex add(Complex c) {
return Complex(real + c.real, imag + c.imag);
}
Complex subtract(Complex c) {
return Complex(real - c.real, imag - c.imag);
}
Complex multiply(Complex c) {
return Complex(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
}
Complex divide(Complex c) {
float denominator = c.real * c.real + c.imag * c.imag;
if (denominator == 0) {
cout << "Error: Division by zero!" << endl;
return Complex(0, 0);
}
float r = (real * c.real + imag * c.imag) ;
float i = (imag * c.real - real * c.imag) ;
return Complex(r, i);
}
void display() {
if (imag >= 0)
cout << real << " + " << imag << "i" << endl;
else
cout << real << " - " << -imag << "i" << endl;
}
};
int main() {
Complex c1(4, 5), c2(2, -3);

cout << "Addition: ";
c1.add(c2).display();
cout << "Subtraction: ";
c1.subtract(c2).display();
cout << "Multiplication: ";
c1.multiply(c2).display();
cout << "Division: ";
c1.divide(c2).display();
return 0;
}
