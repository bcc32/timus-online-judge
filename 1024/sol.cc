#include <cstdio>
#include <cstdlib>
using namespace std;

bool E(int *x, int n)
{
    for (int i = 0; i < n; i++)
        if (x[i] != i + 1)
            return false;
    return true;
}

void permute(int *x, int *p, int n)
{
    int *temp = (int *) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        temp[i] = x[p[i] - 1];
    for (int i = 0; i < n; i++)
        x[i] = temp[i];
    free(temp);
}

int main(void)
{
    int n, c;
    scanf("%d", &n);
    int *p = (int *) malloc(n * sizeof(int));
    int *x = (int *) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &p[i]);
    for (int i = 0; i < n; i++)
        x[i] = p[i];
    for (c = 1; !E(x, n); c++)
        permute(x, p, n);
    printf("%d\n", c);
    free(p);
    free(x);
}
