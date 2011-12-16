#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

string find(long long n)
{
    ostringstream ss;
    long long f = n;
    if (f == 0)
    {
        f = 1;
        ss << "01";
    }
    else if (f == 1)
        ss << 1;
    else
    {
        for (int i = 9; i > 1; i--)
            while (f % i == 0)
            {
                ss << i;
                f /= i;
            }
    }
    if (f == 1)
        return ss.str();
    else
        return "1-";
}

int main(void)
{
    long long n;
    cin >> n;
    string s = find(n);
    reverse(s.begin(), s.end());
    cout << s << endl;
}
