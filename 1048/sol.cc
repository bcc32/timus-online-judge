// XXX USE CSTDIO BECAUSE IT'S FASTER

#include <cstdio>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

int main(void)
{
    int n;
    scanf("%d", &n);
    vector<int> digits;
    ostringstream output;
    bool carry = false;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        digits.push_back(x + y);
    }
    while (!digits.empty())
    {
        int x = digits.back();
        if (carry)
            x++;
        if (x > 9)
            carry = true;
        else
            carry = false;
        output << x % 10;
        digits.pop_back();
    }
    if (carry)
        output << 1;
    string out = output.str();
    reverse(out.begin(), out.end());
    printf("%s\n", out.c_str());
}
