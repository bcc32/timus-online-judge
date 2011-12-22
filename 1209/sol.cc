// FIXME SLOW
#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long x, j;
        cin >> x;
        x = 8 * x - 7;
        for (j = 131072; j * j > x; j--);
        if (j * j == x)
            cout << "1 ";
        else
            cout << "0 ";
    }
    cout << endl;
}
