#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int AND(vector<int> a, vector<int> b, vector<int> c)
{
    int s = 0;
    for (int i = 0; i < a.size(); i++)
        if (find(b.begin(), b.end(), a.at(i)) != b.end() && 
            find(c.begin(), c.end(), a.at(i)) != c.end())
            s++;
    return s;
}

int main(void)
{
    int a, b, c;
    cin >> a;
    vector<int> u(a);
    for (int i = 0; i < a; i++)
        cin >> u.at(i);
    cin >> b;
    vector<int> v(b);
    for (int i = 0; i < b; i++)
        cin >> v.at(i);
    cin >> c;
    vector<int> w(c);
    for (int i = 0; i < c; i++)
        cin >> w.at(i);
    cout << AND(u, v, w) << endl;
}
