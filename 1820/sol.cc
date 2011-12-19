#include <iostream>
using namespace std;

int main(void)
{
    int n, k;
    cin >> n >> k;
    if (n == 1)
        cout << 2 << endl;
    else if (n * 2 % k == 0)
        cout << n * 2 / k << endl;
    else
        cout << n * 2 / k + 1 << endl;
}
