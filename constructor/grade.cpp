#include <iostream>
using namespace std;
class student
{

    int sci, eng, phy, total, per;

public:
    student()
    {
        cout << "enter sci sub marks: ";
        cin >> sci;
        cout << "enter eng sub marks: ";
        cin >> eng;
        cout << "enter phy sub marks: ";
        cin >> phy;
    }

    void gettotal()
    {
        total = sci + eng + phy;
        cout << "total: "<<total <<endl;
       
    }
    void getper()
    {
        per = total / 3;
        cout << "per: "<<per <<endl;
        
    }
    
};

int main()
{
    student abc;
    abc.gettotal();
    abc.getper();
    return 0;
}