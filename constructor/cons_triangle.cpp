#include <iostream>
using namespace std;

class triangle
{
    int base, height;

public:
    triangle()
    {
        int b = base, h = height;
        cout << "enter value of base:" << endl;
        cin >> b;
        cout << "enter value of height:" << endl;
        cin >> h;
        cout << h * b / 2 << endl;
        cout << 3 * b;
        cout << endl;
    }
    ~triangle()
        {
            cout << "hii ";
        }
};
int main()
{

    triangle();
    return 0;
}
