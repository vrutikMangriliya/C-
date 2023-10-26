/* write a program construct a class name solid.
   take private members length,height,width in public make a 
   funcation numed area ,which calculates shape of different solid shapes.*/ 

#include <iostream>
using namespace std;

class solid1
{
    public:
    solid1()
    {
        cout <<"defult constructor is called "<<endl;
    }
    void solid(int a)
    {
        cout << "qube is:"<< a*a*a <<endl; 
    }
    void solid(double r)
    {
        cout << "spher is:"<<4/3*3.14*r*r<<endl;
    }
    void solid(int l ,int b, int h)
    {
        cout <<"cuboid is:"<<l*b*h<<endl;
    }

};

int main()
{
    solid1 s1;
    s1.solid(5);
    s1.solid(2.2);
    s1.solid(2,3,4);  
}