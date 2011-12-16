#include <iostream>
#include <vector>
using namespace std;

void remove(vector<int> &v, int n)
{
    for (int i = 0; i < n; i++)
        if (v.at(i) == n)
        {
            v.erase(v.begin() + i);
            break;
        }
}

int min(vector<int> v)
{
    int m = v.at(0);
    for (int i = 1; i < v.size(); i++)
        if (v.at(i) < m)
            m = v.at(i);
    return m;
}

int gcd(vector<int> v)
{
    for (int i = min(v); i > 1; i--)
    {
        bool cd = true;
        for (int j = 0; j < v.size(); j++)
            if (v.at(j) % i)
            {
                cd = false;
                break;
            }
        if (cd)
            return i;
    }
    return 1;
}

int main(void)
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        char act = cin.get();
        cin.get();
        int x;
        cin >> x;
        if (act == '+')
            v.push_back(x);
        else
            remove(v, x);
        cout << gcd(v) << endl;
    }
}
