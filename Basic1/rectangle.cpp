#include <iostream>
using namespace std;

class rectangle
{
private:
    int length, heights;

public:
    int l = length, h = heights;

    int area(int l, int h)
    {
        return l * h;
    }
    int circ(int l, int h)
    {
        return 2 * (l + h);
    }
};

int main()
{
    int a, b;
    cin >> a >> b;

    rectangle r1;

    cout << r1.area(a, b) << endl;
    cout << r1.circ(a, b);

    return 0;
}
