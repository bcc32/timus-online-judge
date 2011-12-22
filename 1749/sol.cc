#include <iostream>
#include <sstream>
using namespace std;

long long S(long long n, int m)
{
    long long sum = 0;
    ostringstream ss;
    ss << n;
    string s = ss.str();
    for (int i = 0; i < s.size(); i++)
        for (int j = 1; i + j <= s.size(); j++)
        {
            stringstream ssub (stringstream::in | stringstream::out);
            ssub << s.substr(i, j);
            long long x;
            ssub >> x;
            sum += x;
            sum %= m;
        }
    return sum;
}

long long F(long long n, int m)
{
    stringstream ss (stringstream::in | stringstream::out);
    for (int i = 0; i < m; i++)
        ss << n;
    long long x;
    ss >> x;
    return x;
}

int main(void)
{
    int p, k, m;
    cin >> p >> k >> m;
    cout << S(F(p, k), m) << endl;
}
