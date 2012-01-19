#include <iostream>
#include <string>
#define toupper(x) ((x) >= 'a' && (x) <= 'z' ? (x) - 32 : (x))
#define tolower(x) ((x) >= 'A' && (x) <= 'Z' ? (x) + 32 : (x))
using namespace std;

int main(void)
{
    string s;
    bool t = true;
    for (getline(cin, s); !cin.eof(); getline(cin, s))
    {
        for (string::iterator it = s.begin(); it < s.end(); it++)
        {
            if (t)
            {
                *it = toupper(*it);
                if (*it >= 'A' && *it <= 'Z')
                    t = false;
            }
            else if (*it == '.' || *it == '!' || *it == '?')
                t = true;
            else
                *it = tolower(*it);
            cout << *it;
        }
        cout << endl;
    }
}
