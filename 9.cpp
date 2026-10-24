#include<iostream>
using namespace std;

class shape
{
    public:
    virtual void Draw()
    {
        cout<<"Drawing the shape\n"; 
    }
};

class circle : public shape
{
    public:
    void Draw() 
    {
        cout<<"Drawing the circle\n"; 
    }
};

class rectangle : public shape
{
    public:
    void Draw() 
    {
        cout<<"Drawing the rectangle\n"; 
    }
};

int main()
{
    shape s1; circle c1; rectangle r1; 
    shape *s;
    s=&s1;
    s -> Draw();
    s=&c1;
    s -> Draw();
    s=&r1;
    s -> Draw();
    
    return 0;
}
