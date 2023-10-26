/* friend funcation
declare in class , define outside of class
directly called

object as arguments and as return*/

#include <iostream>
using namespace std;

class rect
{
    friend rect Add(rect, rect, rect, rect);
    int l, w;

public:
    void setdata(int a, int b)
    {
        l = a, w = b;
    }
    int getarea()
    {
        return l * w;
    }
};

rect Add(rect m, rect n, rect x, rect y)
{
    rect t;
    t.l = m.l + n.l + x.l - y.l;
    t.w = m.w + n.w + x.w - y.w;
    return t;
}

int main()
{
    rect a,b,c,d,e;
    a.setdata(4,5);
    cout<<"area of rectangle A is :"<<a.getarea() << endl;

    b.setdata(4,4);
    cout<<"area of rectangle B is :"<<b.getarea() << endl;

    c.setdata(2,2);
    cout<<"area of rectangle C is :"<<c.getarea() << endl;

    d.setdata(5,6);
    cout<<"area of rectangle D is :"<<d.getarea() << endl;

    e.setdata(2,8);
    cout<<"area of rectangle E is :"<<e.getarea() << endl;
}