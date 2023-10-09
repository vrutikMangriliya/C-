#include <iostream>
using namespace std;

class triangle
{
private:
    int base, height;

public:
    int b = base, h = height;
    int area(int b, int h)
    {
        return h * b / 2;
    }
    int cir(int b)

    {
        return 3 * b;
    }
};
int main()
{
    int a, c;
    cin >> a >> c;

    triangle t1;

    cout << t1.area(a, c) << endl;
    cout << t1.cir(a);

    return 0;
}
