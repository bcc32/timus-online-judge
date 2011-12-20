#include <iostream>
using namespace std;

int main(void)
{
    int x, y;
    cin >> x >> y;
    if (x % 2 == 0 || y % 2 == 1)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
}
