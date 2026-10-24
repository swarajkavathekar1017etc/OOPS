#include <iostream>
using namespace std;

class complex
{
    int real, img;  

public:
    
    void accept(int r, int i)
    {
        real = r;
        img = i;
    }

   
    void display()
    {
        cout << "The complex number is: ";

        if(img > 0)
            cout << real << " + " << img << "i" << endl;
        else
            cout << real << img << "i" << endl;
    }

    
    complex operator+(complex c)
    {
        complex add;

        add.real = real + c.real;
        add.img = img + c.img;

        return add;
    }

    
    complex operator-(complex c)
    {
        complex subtract;

        subtract.real = real - c.real;
        subtract.img = img - c.img;

        return subtract;
    }

    
    complex operator*(complex c)
    {
        complex multiply;

        multiply.real = (real * c.real) - (img * c.img);
        multiply.img = (real * c.img) + (img * c.real);

        return multiply;
    }

    
    complex operator/(complex c)
    {
        complex result;

       
        int denominator = (c.real * c.real) + (c.img * c.img);

        result.real = ((real * c.real) + (img * c.img)) / denominator;
        result.img = ((img * c.real) - (real * c.img)) / denominator;

        return result;
    }
};

int main()
{
    complex c1, c2, c3;

    
    c1.accept(6, 2);
    c2.accept(5, 6);

    c1.display();
    c2.display();

   
    c3 = c1 + c2;
    cout << "Addition:\n";
    c3.display();

  
    c3 = c1 - c2;
    cout << "Subtraction:\n";
    c3.display();

   
    c3 = c1 * c2;
    cout << "Multiplication:\n";
    c3.display();

    
    c3 = c1 / c2;
    cout << "Division:\n";
    c3.display();

    return 0; 
}
