// XXX
// REALLY SLOW

#include <iostream>
#include <sstream>
using namespace std;

int vf(int S, int x)
{
    int sum = 0;
    stringstream ss;
    ss << x;
    string s = ss.str();
    for (int i = 0; i < s.size(); i++)
        sum += (int) s[i] - (int) '0';
    return sum == S;
}

int main(void)
{
    int S, c = 0;
    cin >> S;
    for (int i = 1; i <= 1000000000; i++)
        if (vf(S, i))
            c++;
    cout << c << endl;
}
