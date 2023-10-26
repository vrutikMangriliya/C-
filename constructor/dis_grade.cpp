#include <iostream>
using namespace std;
class student
{

    int sci, eng, phy, total, per;
    string name;

public:
    student()
    {
        cout << "enter your name: ";
        cin >> name;
        cout << "enter sci sub marks: ";
        cin >> sci;
        cout << "enter eng sub marks: ";
        cin >> eng;
        cout << "enter phy sub marks: ";
        cin >> phy;
    }
    ~student()
    {
        cout << "student   " << name << "--->destructor is called" << endl;
    }
    void gettotal()
    {
        total = sci + eng + phy;
        cout << "total: " << total << endl;
    }
    void getper()
    {
        per = total / 3;
        cout << "per: " << per << endl;
    }
    void showdata()
    {
        cout << "\nstudent name:" << name;
        cout <<"\nname \tsci\teng\tphy\ttotal\tper";
        cout <<"\n"<<name <<"\t"<<sci <<"\t"<<eng<<"\t"<<phy<<"\t"<<total<<"\t"<<per;
    }
};

int main()
{
    student s1, s2;
    s1.gettotal();
    s1.getper();

    s2.gettotal();
    s2.getper();

    s1.showdata();
    s2.showdata();

    return 0;
}