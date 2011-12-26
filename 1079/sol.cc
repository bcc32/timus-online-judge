// XXX
// STORE MAXIMUMS FOUND IN AN ARRAY

#include <iostream>
#include <vector>
#include <utility>
using namespace std;

long long a(long long n)
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
    long long n, m = 0;
    vector< pair<int, int> > v;
    for (long long i = 0; i <= 99999; i++)
    {
        long long b = a(i);
        if (b > m)
        {
            v.push_back(make_pair(i, b));
            m = b;
        }
    }
    cin >> n;
    while (n != 0)
    {
        int i;
        for (i = v.size() - 1; i > -1; i--)
        {
            if (v.at(i).first <= n)
                break;
        }
        cout << v.at(i).second << endl;
        cin >> n;
    }
}
