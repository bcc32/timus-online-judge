#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(void)
{
    string s;
    getline(cin, s);
    set<string> subs;
    for (int i = 0; i < s.size(); i++)
        for (int j = 1; i + j <= s.size(); j++)
        {
            string sub = s.substr(i, j);
            subs.insert(sub);
        }
    cout << subs.size() << endl;
}
