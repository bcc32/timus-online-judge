#include <iostream>
#include <vector>
using namespace std;

vector<long long> v;

int f(int x)
{
    return v.at(x - 1);
}

bool under(int a, int b, int c)
{
    return f(c) * (b - a) < (f(b) - f(a)) * (c - a) + f(a);
}

int main(void)
{
    int n;
    cin >> n;
    v.resize(n);
    double m = 0.0;
    int a, b;
    for (int i = 0; i < n; i++)
        cin >> v.at(i);
    for (int i = 1; i < v.size(); i++)
        for (int j = i + 1; j <= v.size(); j++)
        {
            bool t = true;
            for (int k = i + 1; k < j; k++)
                if (!under(i, j, k))
                {
                    t = false;
                    break;
                }
            if (t)
                if (m * (j - i) < (f(j) > f(i) ? f(j) - f(i) : f(i) - f(j)))
                {
                    m = ((double) (f(j) > f(i) ? f(j) - f(i) : f(i) - f(j))) / 
                        (j - i);
                    a = i;
                    b = j;
                }
        }
    cout << a << " " << b << endl;
}
