#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    int n, s = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v.at(i);
    sort(v.begin(), v.end());
    for (int i = 0; i < n / 2 + 1; i++)
        s += v.at(i) / 2 + 1;
    cout << s << endl;
}
