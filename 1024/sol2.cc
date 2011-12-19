#include <iostream>
#include <vector>
using namespace std;

bool E(vector<int> x)
{
    for (int i = 0; i < x.size(); i++)
        if (x.at(i) != i + 1)
            return false;
    return true;
}

void permute(vector<int> &x, vector<int> p)
{
    vector<int> temp;
    for (int i = 0; i < x.size(); i++)
        temp.push_back(x.at(p.at(i) - 1));
    x = temp;
}

int main(void)
{
    int n, c;
    cin >> n;
    vector<int> p(n), x(n);
    for (int i = 0; i < n; i++)
        cin >> p.at(i);
    x = p;
    for (c = 1; !E(x); c++)
        permute(x, p);
    cout << c << endl;
}
