#include <iostream>
using namespace std;

/* XXX SLOW
long long poss(char snd, char fst, int n)
{
    if (n == 0)
        return 1;
    else if (n == -1)
        return 0;
    if (fst == 'W')
        return poss('W', 'R', n - 1) + poss('B', 'R', n - 2);
    else if (fst == 'R')
        return poss('R', 'W', n - 1) + poss('B', 'W', n - 2);
    else
        return poss(' ', 'R', n - 1) + poss(' ', 'W', n - 1);
}
*/

// XXX NB
// Fibonacci because of recursion evident in previous algorithm
// Revised to use iterative algorithm to avoid TLE

unsigned int poss(int n)
{
    int x = 2, y = 2;
    if (n == 1)
        return 2;
    else if (n == 2)
        return 2;
    else
        for (int i = 2; i < n; i++)
        {
            int t = y;
            y = x + y;
            x = t;
        }
    return y;
}

int main(void)
{
    int n;
    cin >> n;
    // cout << poss(' ', ' ', n) << endl;
    cout << poss(n) << endl;
}
