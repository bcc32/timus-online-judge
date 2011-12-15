#include <iostream>
#include <vector>
using namespace std;

int p2(int n)
{
    int p = 1;
    for (int i = 0; i < n; i++)
        p *= 2;
    return p;
}

int sum(vector<int> v)
{
    int s = 0;
    for (int i = 0; i < v.size(); i++)
        s += v.at(i);
    return s;
}

int main(void)
{
    int n;
    cin >> n;
    vector<int> v(n), a(n);
    for (int i = 0; i < n; i++)
        cin >> v.at(i);
    int x = p2(n);
    int g = sum(v);
    int m = sum(v);
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < n; j++)
            if ((i >> j) % 2)
                a.push_back(v.at(j));
        int y = sum(a) * 2 > g ? sum(a) * 2 - g : g - sum(a) * 2;
        if (y < m)
            m = y;
        a.clear();
    }
    cout << m << endl;
}
