#include <iostream>
using namespace std;

class Complex {
    int r, q;
public:
    void read(int real, int img) {
        r = real;
        q = img;
    }
    void display() {
        if (q >= 0) {
            cout << r << "+" << q << "i" << endl;
        } else {
            cout << r << "-" << -q << "i" << endl;
        }
    } 
    Complex operator+(Complex c) {
        Complex sum;
        sum.r = r + c.r;
        sum.q = q + c.q;
        return sum;
    }
};

int main() {
    Complex c1, c2, c3;
    int r1, r2, q1,q2;
    cout<<"enter real part of img number:";
    cin>>r1;
    cout<<"enter img part of img number:";
    cin>>q1;
    cout<<"enter real part of img number:";
    cin>>r2;
    cout<<"enter img part of img number:";
    cin>>q2;
    
    c1.read(r1, q1);
    c2.read(r2, q2);
    
    c3 = c1 + c2; 
    c3.display();
    
    return 0;
}
