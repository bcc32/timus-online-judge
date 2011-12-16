#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long min(vector<long long> v)
{
    long long m = v.at(1) - v.at(0);
    for (int i = 2; i < v.size(); i++)
        if (v.at(i) - v.at(i - 1) < m)
            m = v.at(i) - v.at(i - 1);
    return m;
}

int main(void)
{
    vector<long long> v(3);
    for (int i = 0; i < 3; i++)
        cin >> v.at(i);
    sort(v.begin(), v.end());
    while (min(v) > 0)
    {
        v.push_back(min(v));
        sort(v.begin(), v.end());
    }
    cout << v.size() - 2 << endl;
    return 0;
}
