#include <iostream>
#include <string>
using namespace std;

bool palin(string s)
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
    for (int i = s.size(); i > 0; i--)
        for (int j = 0; i + j <= s.size(); j++)
            if (palin(s.substr(j, i)))
            {
                cout << s.substr(j, i) << endl;
                return 0;
            }
}
