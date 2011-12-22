// TODO

#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool contains(string big, string small)
{
    if (big.size() < small.size())
        return false;
    for (int i = 0; i + small.size() <= big.small(); i++)
        if (big.substr(i, small.size()) == small)
            return true;
    return false;
}

int main(void)
{
    int n, m, p;
    cin >> n >> m >> p;
    vector<char> letters;
    vector<string> forbidden;
    for (int i = 0; i < n; i++)
        letters.push_back(cin.get());
    string line;
    getline(cin, line);
    for (int i = 0; i < p; i++)
    {
        getline(cin, line);
        forbidden.push_back(line);
    }
}
