#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
    int min_v, max_v;
    bool sum = false;
    int m, n;
    cin >> m;
    int *u = (int *) malloc (n * sizeof(int));
    for (int i = 0; i < m; i++)
        cin >> u[i];
    cin >> n;
    int *v = (int *) malloc (n * sizeof(int));
    for (int i = 0; i < n; i++)
        cin >> v[i];
    min_v = v[n - 1];
    max_v = v[0];
    for (int i = 0; i < m; i++)
    {
        if (u[i] + max_v < 10000)
            continue;
        else if (u[i] + min_v > 10000)
            break;
        else if (sum)
            break;
        else
            for (int j = 0; j < n; j++)
                if (u[i] + v[j] == 10000)
                {
                    sum = true;
                    break;
                }
    }
    if (sum)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
