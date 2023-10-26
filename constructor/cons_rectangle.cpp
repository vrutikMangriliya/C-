#include <iostream>
using namespace std;

class rectangle
{
    int length, heights;

public:
    rectangle()
    {
        int l = length, h = heights;

        cout << "enter value of length:" << endl;
        cin >> l;
        cout << "enter value of height:" << endl;
        cin >> h;
        cout << "area: " << l * h << endl;
        cout << "circunference: " << 2 * (l + h) << " ";
    }
};

int main()
{
    rectangle();

    return 0;
}
