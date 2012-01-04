#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int n, m;
    cin >> n >> m;
    string s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s += (char)(x + (int)'0');
    }
    rotate(s.begin(), s.begin() + m % s.size(), s.end());
    cout << s.substr(0, 10).c_str() << endl; // timus complains about << string
}
