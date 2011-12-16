#include <iostream>
using namespace std;

int main(void)
{
    int x;
    cin >> x;
    int sum = 0;
    if (x > 0)
        for (int i = 1; i <= x; i++)
            sum += i;
    else if (x == 0)
        sum = 1;
    else
        for (int i = x; i <= 1; i++)
            sum += i;
    cout << sum << endl;
}
