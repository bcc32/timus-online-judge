// FIXME IMPLEMENT WITHOUT VECTORS BY STORING LAST TWO VALUES

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> add(vector<int> a, vector<int> b)
{
    bool carry = false;
    vector<int> sum;
    for (int i = a.size() - 1; i > -1; i--)
    {
        if (carry)
            sum.push_back((a.at(i) + b.at(i) + 1) % 10);
        else
            sum.push_back((a.at(i) + b.at(i)) % 10);
        if (a.at(i) + b.at(i) > 9)
            carry = true;
        else
            carry = false;
    }
    if (carry)
        sum.push_back(1);
    return sum;
}

int main(void)
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a.at(i) >> b.at(i);
    vector<int> sum = add(a, b);
    reverse(sum.begin(), sum.end());
    for (int i = 0; i < sum.size(); i++)
        cout << sum.at(i);
    cout << endl;
}
