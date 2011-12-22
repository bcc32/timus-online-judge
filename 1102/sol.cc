#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool startswith(string big, string small)
{
    if (big.size() < small.size())
        return false;
    for (int i = 0; i < small.size(); i++)
        if (big[i] != small[i])
            return false;
    return true;
}

bool poss(string str, vector<string> cand)
{
    if (str.size() == 0)
        return true;
    for (int i = 0; i < cand.size(); i++)
        if (startswith(str, cand.at(i)))
            if (poss(str.substr(cand.at(i).size()), cand))
                return true;
    return false;
}

int main(void)
{
    int n;
    cin >> n;
    string s;
    getline(cin, s);
    vector<string> cand;
    cand.push_back("puton");
    cand.push_back("out");
    cand.push_back("output");
    cand.push_back("in");
    cand.push_back("input");
    cand.push_back("one");
    for (int i = 0; i < n; i++)
    {
        getline(cin, s);
        if (poss(s, cand))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
