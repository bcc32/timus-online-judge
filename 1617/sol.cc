#include <iostream>
#include <set>
using namespace std;

int main(void)
{
    set<int> s;
    multiset<int> m;
    int n, c = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
        m.insert(x);
    }
    for (set<int>::iterator it = s.begin(); it != s.end(); it++)
        c += m.count(*it) / 4;
    cout << c << endl;
}
