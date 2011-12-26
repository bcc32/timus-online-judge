#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    set<string> acc;
    set<string> spmr;
    string s;
    getline(cin, s);
    for (int i = 0; i < n; i++)
    {
        getline(cin, s);
        if (acc.find(s) == acc.end())
            acc.insert(s);
        else
            spmr.insert(s);
    }
    while (!spmr.empty())
    {
        cout << *spmr.begin() << endl;
        spmr.erase(spmr.begin());
    }
}
