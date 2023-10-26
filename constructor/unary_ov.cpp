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

    Box operator++(int)
    {
        Box t;
        t.l = l++;
        t.w = w++;
        t.h = h++;
        return t;
    }

};

int main()
{
    Box b1;
    b1.setdata(2,2,2);
    cout<< "Volume of Box B1 is: "<< b1.getVolume() << endl;
    b1++; // 3 3 3 
    cout<< "after increment volume Box B1 is: "<< b1.getVolume() << endl;

}