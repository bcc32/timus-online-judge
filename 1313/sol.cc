// FIXME
#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector< vector<int> > a(n);
    vector<int> v;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            int in;
            cin >> in;
            a.at(i).push_back(in);
        }
    for (int i = 0; i < 2 * n - 1; i++)
        for (int j = i - n + 1; j <= i; j++)
            if (j >= 0 && j < n)
                v.push_back(a.at(i - j).at(j));
    cout << v.at(0);
    for (int i = 1; i < v.size(); i++)
        cout << " " << v.at(i);
    cout << endl;
}
