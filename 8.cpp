#include <iostream>
#include <cstring>
using namespace std;

class String
{
    char *str;  

public:
    
    String()
    {
        str = new char[1];
        str[0] = '\0';
    }

    
    String(const char *s)
    {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

   
    ~String()
    {
        delete[] str;
    }

    
    void accept()
    {
        char temp[100];

        cout << "Enter a string: ";
        cin >> temp;

        delete[] str; 

        str = new char[strlen(temp) + 1];
        strcpy(str, temp);
    }

   
    void display()
    {
        cout << "String: " << str << endl;
    }
};

int main()
{
    String s1; 

    s1.accept();
    s1.display();

    String s2("Hello");  
    s2.display();

    return 0; 
}
