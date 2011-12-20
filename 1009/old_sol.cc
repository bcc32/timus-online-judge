#include <iostream>
#include <sstream>
#include <algorithm>
#include <cmath>
using namespace std;

long long power(int b, int e)
{
    long long p = 1;
    for (int i = 0; i < e; i++)
        p *= b;
    return p;
}

bool valid(long long n, int k)
{
    ostringstream ss;
    int l = (int) floor(log((double) n) / log((double) k));
    for (int i = l; i >= 0; i--)
    {
        long long p = power(k, i);
        ss << n / p;
        n %= p;
    }
    string s = ss.str();
    reverse(s.begin(), s.end());
    bool zero = false;
    for (long long i = 0; i < s.size(); i++)
        if (s[i] == '0')
            if (zero)
                return false;
            else
                zero = true;
        else
            zero = false;
    return true;
}

int main(void)
{
    int N, K;
    cin >> N >> K;
    long long l = power(K, N - 1);
    long long h = power(K, N);
    int c = 0;
    for (long long i = l; i < h; i++)
        if (valid(i, K))
            c++;
    cout << c << endl;
}
