#include <iostream>
#include <cstdlib>
using namespace std;

bool E(int x[], int n)
{
    for (int i = 0; i < n; i++)
        if (x[i] != i + 1)
            return false;
    return true;
}

void permute(int x[], int p[], int n)
{
    for (int i = 0; i < n; i++)
        x[i] = p[x[i] - 1];
}

int main(void)
{
    int n, c;
    cin >> n;
    int *p = (int *) malloc(n * sizeof(int));
    int *x = (int *) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        cin >> p[i];
    for (int i = 0; i < n; i++)
        x[i] = p[i];
    for (c = 1; !E(x, n); c++)
        permute(x, p, n);
    cout << c << endl;
    free(p);
    free(x);
}
