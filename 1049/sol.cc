#include <iostream>
#include <vector>
#include <cassert>
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
    vector<int> primes;
    for (int i = 0; i <= 10000; i++)
        if (isprime(i))
            primes.push_back(i);
    vector<int> count(primes.size());
    for (int i = 0; i < 10; i++)
    {
        int x;
        cin >> x;
        for (int i = 0; x != 1; i++) // WILL NOT HAVE DIVISOR GREATER THAN 10000
            while (x % primes.at(i) == 0)
            {
                count.at(i)++;
                x /= primes.at(i);
            }
        assert(x == 1);
    }
    int p = 1;
    for (int i = 0; i < count.size(); i++)
        p *= count.at(i) + 1;
    cout << p % 10 << endl;
}
