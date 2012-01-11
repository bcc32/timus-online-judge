#include <iostream>
using namespace std;

int d(char c);

int main(void)
{
    char c;
    int n = 0, m = 0;
    for (c = cin.get(); !cin.eof(); c = cin.get())
    {
        n += d(c);
        if (d(c) > m)
            m = d(c);
    }
    for (int i = m + 1; i <= 36; i++)
        if (n % (i - 1) == 0)
        {
            cout << i << endl;
            break;
        }
}

int d(char c)
{
    if (c >= '0' && c <= '9')
        return (int)c - (int)'0';
    else if (c >= 'A' && c <= 'Z')
        return (int)c - (int)'A' + 10;
    else return 0;
}
