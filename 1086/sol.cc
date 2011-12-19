#include <iostream>
#include <vector>
using namespace std;

bool isprime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main(void)
{
    vector<int> v;
    int n = 0;
    for (int i = 0; i < 15000; i++)
    {
        while (!isprime(n))
            n++;
        v.push_back(n);
        n++;
    }
    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        cout << v.at(x - 1) << endl;
    }
}
