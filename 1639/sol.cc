#include <iostream>
using namespace std;

int main(void)
{
    int m, n, x = 0;
    cin >> m >> n;
    if ((m * n - 1) % 2 == 1)
        cout << "[:=[first]" << endl;
    else
        cout << "[second]=:]" << endl;
}
