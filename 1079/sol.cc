#include <iostream>
using namespace std;

int a(int n)
{
    if (n == 0 || n == 1)
        return n;
    else if (n % 2 == 0)
        return a(n / 2);
    else
        return a(n / 2) + a(n / 2 + 1);
}

int main(void)
{
    int n, m;
    cin >> n;
    while (n != 0)
    {
        m = 0;
        for (int i = 0; i <= n; i++)
        {
            int b = a(i);
            if (b > m)
                m = b;
        }
        cout << m << endl;
        cin >> n;
    }
}
