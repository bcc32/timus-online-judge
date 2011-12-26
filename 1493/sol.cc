#include <iostream>
#include <string>
using namespace std;

int dsum(int n)
{
    return n % 10 + n / 10 % 10 + n / 100 % 100;
}

int main(void)
{
    int n, foo, bar;
    cin >> n;
    foo = n / 1000;
    bar = n % 1000;
    if (dsum(foo) == dsum(bar - 1) || dsum(foo) == dsum(bar + 1))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
