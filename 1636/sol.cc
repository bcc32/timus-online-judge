#include <iostream>
using namespace std;

int main(void)
{
    int q, z;
    cin >> q >> z;
    int c = 0;
    for (int i = 0; i < 10; i++)
    {
        int x;
        cin >> x;
        c += x;
    }
    if (z - c * 20 < q)
        cout << "Dirty debug :(" << endl;
    else
        cout << "No chance." << endl;
}
