// FIXME

#include <iostream>
using namespace std;

long long poss(int n, int min_height)
{
    if (n == 0)
        return 1;
    long long sum = 0;
    for (int i = min_height; i <= n; i++)
        sum += poss(n - i, i + 1);
    return sum;
}

int main(void)
{
    int n;
    cin >> n;
    cout << poss(n, 1) << endl;
}
