#include <iostream>
using namespace std;
class person
{
    string name, city;
    int age;

public:
    person()
    {
        cout << "enter your name: " << endl;
        cin >> name;

        cout << "enter your age: " << endl;
        cin >> age;

        cout << "enter your city: " << endl;
        cin >> city;

        cout << endl;

        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "city: " << city << endl;
    }
};
int main()
{

    person abc;
    return 0;
}