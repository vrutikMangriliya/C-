#include<iostream>
using namespace std;
class Box
{
    int l,w,h;

    public:
    void setdata(int a,int b,int c)
    {
        l = a;
        w = b;
        h = c;
    }

    int getVolume()
    {
        return l*w*h;
    }

    Box operator*(Box &n)
    {
        Box t;
        t.l = l * n.l;
        t.w = w * n.w;
        t.h = h * n.h;
        return t;
    }

    Box operator-(Box &z)
    {
        Box x;
        x.l = l - z.l;
        x.w = w - z.w;
        x.h = h - z.h;
        return x;
    }
};

int main()
{
    Box b1,b2,b3,b4;
    b1.setdata(2,2,2);
    cout<< "Volume of Box B1 is: "<< b1.getVolume() << endl;
    b2.setdata(3,3,3);
    cout<< "Volume of Box B2 is: "<< b2.getVolume() << endl;

    b3 =  b1 * b2;
    cout<< "Volume of Box B3 is: "<< b3.getVolume() << endl;

    b4 =b3 - b1;
    cout<< "Volume of Box B3 is: "<< b4.getVolume() << endl;

}