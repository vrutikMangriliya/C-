#include <iostream>
using namespace std;

class larg
{
    friend larg number(larg, larg);
    int a, b;

public:
    void setdata()
    {
        cout << "enter A value:";
        cin >> a;

        cout << "enter B value:";
        cin >> b;
        cout <<endl;
    }
};

 larg number(larg x,larg y)
{
    if (x.a > y.b)
        cout << "value A is big" << endl;
    else
        cout << "value B is big" << endl;
}

int main()
{
    larg x,y;
    x.setdata();
    number(x,y);
}