// FIXME SLOW

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
    string s, t;
    int n, x;
    cin >> n;
    getline(cin, s);
    getline(cin, s);
    getline(cin, t);
    for (x = 0; s != t && x < n; x++)
        rotate(s.begin(), s.end() - 1, s.end());
    if (x == n)
        cout << -1 << endl;
    else
        cout << x << endl;
}
