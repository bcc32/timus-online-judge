#include <iostream>
#include <string>
using namespace std;

bool ispalin(string s)
{
    for (int i = 0; 2 * i < s.size(); i++)
        if (s[i] != s[s.size() - i - 1])
            return false;
    return true;
}

int main(void)
{
    string s;
    getline(cin, s);
    for (int i = 1; i <= s.size(); i++)
    {
        string f = s;
        string x = f.substr(0, i);
        for (int j = 0; j < x.size(); j++)
            f += x[i - j - 1];
        if (ispalin(f))
        {
            cout << f << endl;
            break;
        }
    }
}
