// FIXME
#include <iostream>
using namespace std;

int main(void)
{
    int vt, ct, b, e, d = 0;
    cin >> vt >> ct >> b >> e;
    for (int i = b; i < e; i++)
        d += vt + 2 * ct;
    d -= vt;
    cout << d << endl;
}
