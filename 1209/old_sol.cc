// FIXME
// IOSTREAM TOO SLOW
#include <cstdio>
using namespace std;

int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        unsigned long long x;
        scanf("%llu", &x);
        x--;
        for (int i = 1; i <= x; i++)
            x -= i;
        if (x == 0)
            printf("1 ");
        else
            printf("0 ");
    }
    printf("\n");
}
