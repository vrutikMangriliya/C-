#include <iostream>
using namespace std;

class circle
{
private:
    int redius;

public:
    int r = redius;

    void area(int r)
    {
        cout << "area:"<< 3.14 * r * r <<endl;
    }

    void circ(int r)
    {
        cout << "circle:"<< 2 * 3.14 * r;
    }
};

int main()
{
    int r1;
    cout << "enter value:";
    cin >> r1;

    circle mycircle;

    mycircle.area(r1);
    mycircle.circ(r1);
}
