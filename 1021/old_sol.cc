// XXX

#include <iostream>
#include <vector>
using namespace std;


int main(void)
{
    vector<int> u, v;
    int x, y;
    cin >> x;
    u.resize(x);
    for (int i = 0; i < x; i++)
        cin >> u.at(i);
    cin >> y;
    v.resize(y);
    int m_j = 32767;
    for (int i = 0; i < y; i++)
    {
        cin >> v.at(i);
        if (v.at(i) < m_j)
            m_j = v.at(i);
    }
    for (int i = 0; i < x; i++)
    {
        if (u.at(i) + m_j > 10000)
            break;
        for (int j = 0; j < y; j++)
        {
            if (u.at(i) < 10000 && v.at(j) <= 0)
                break;
            else if (u.at(i) + v.at(j) == 10000)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 1;
}
