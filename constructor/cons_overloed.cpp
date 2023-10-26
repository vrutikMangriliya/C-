#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex()
    {
        int a = 10, b = 20;

        cout << a + b << endl;
        cout << a << endl;
    }
    void hello()
    {
        cout << "hello " << endl;
    }
    complex(string name)
    {
        cout <<" name"<<" "<<name <<endl;
    }
};

int main()
{
    complex abs;
    complex names("vrutik");
    abs.hello();
}