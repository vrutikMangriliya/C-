#include <iostream>
using namespace std;

class test
{
    int maths, science, eco;

public:
    void setdata(int, int, int);
    void gettotal()
    {
        cout << "total marks :" << maths + science + eco << endl;
    }
};

void test ::setdata(int a, int b, int c)
{
    maths = a,
    science = b;
    eco = c;
}

int main()
{
    test t[5];
    int i, a, b, c;

    for (i = 0; i < 2; i++)
    {
        cout << "enter maths sub marks :";
        cin >> a;
        cout << "enter science sub marks :";
        cin >> b;
        cout << "enter eco sub marks :";
        cin >> c;
        cout << endl;
        t[i].setdata(a, b, c);
    }
    for (i = 0; i < 2; i++)
    {
        t[i].gettotal();
    }
    
}