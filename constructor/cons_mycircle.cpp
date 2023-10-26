#include <iostream>
using namespace std;

class circle
{
    int redius;

public:
    circle()
    {
        int r = redius;
        cout << "enter vlaue of redius: ";
        cin >> r;
        cout << "area: " << 3.14 * r * r << endl;
        cout << "circle: " << 2 * 3.14 * r;
    }
    
};

int main()
{
    circle();
}
