#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main(void)
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        v.push_back(0);
    for (int i = 0; i < m; i++)
    {
        int vote;
        cin >> vote;
        v.at(vote - 1)++;
    }
    for (int i = 0; i < n; i++)
        printf("%.2f%%\n", 100 * (double) v.at(i) / m);
}
