#include <iostream>
#include <string>
using namespace std;

long long fact(int n, int k)
{
    long long p = 1;
    for (int i = n; i > 0; i -= k)
        p *= i;
    return p;
}

int main(void)
{
    int n;
    string s;
    cin >> n;
    cin.get();
    getline(cin, s);
    cout << fact(n, s.size()) << endl;
}
