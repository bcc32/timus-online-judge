#include <iostream>
using namespace std;

int main(void)
{
    int n, c = 0;
    cin >> n;
    for (int i = 245; i > 0; i--)
        if (n >= i * i)
        {
            c += n / (i * i);
            n %= i * i;
        }
    cout << c << endl;
}
