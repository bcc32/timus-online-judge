#include <iostream>
using namespace std;

bool pm(int x, int n, int m, int y)
{
    long long p = 1;
    if (y == 0 && x % m != 0)
        return false;
    for (int i = 0; i < n; i++)
        p = p * x % m;
    return p == y;
}

int main(void)
{
    int n, m, y, x;
    cin >> n >> m >> y;
    bool found = false;
    for (x = 0; x < m; x++)
    {
        if (pm(x, n, m, y))
        {
            found = true;
            cout << x;
            break;
        }
    }
    for (x++; x < m; x++)
        if (pm(x, n, m, y))
            cout << " " << x;
    if (!found)
        cout << "-1";
    cout << endl;
}
