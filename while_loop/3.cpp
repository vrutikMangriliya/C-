#include <iostream>
using namespace std;

int main()
{
    int i = 1, n;

    cout << "enter value:";
    cin >> n;

    while (i <= n)
    {
        cout << i << ' ';
        i++;
    }
    return 0;
}