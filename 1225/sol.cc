// FIXME SLOW
#include <iostream>
using namespace std;

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

int main(void)
{
    int n;
    cin >> n;
    cout << poss(' ', ' ', n) << endl;
}
