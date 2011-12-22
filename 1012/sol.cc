// XXX
// USE BINARY AND MULTIPLY BY POWER OF BASE TO NUMBER OF NON-ZERO DIGITS
#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

bool valid(int n)
{
    ostringstream ss;
    while (n >= 1)
    {
        ss << n % 2;
        n >>= 1;
    }
    string s = ss.str();
    reverse(s.begin(), s.end());
    bool zero = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
            if (zero)
                return false;
            else
                zero = true;
        else
            zero = false;
    }
    return true;
}

int nonzero(int n)
{
    ostringstream ss;
    while (n >= 1)
    {
        ss << n % 2;
        n >>= 1;
    }
    string s = ss.str();
    reverse(s.begin(), s.end());
    int c = 0;
    for (int i = 0; i < s.size(); i++)
        if (s[i] == '1')
            c++;
    return c;
}

unsigned long long power(int b, int e)
{
    unsigned long long p = 1;
    for (int i = 0; i < e; i++)
        p *= b;
    return p;
}

int main(void)
{
    int n, k;
    cin >> n >> k;
    unsigned long long c = 0;
    for (int i = (1 << n - 1); i < (1 << n); i++)
        if (valid(i))
            c += power(k - 1, nonzero(i));
    cout << c << endl;
}
