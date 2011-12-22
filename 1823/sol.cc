#include <iostream>
#include <string>
#include <sstream>
#define R 8.314
using namespace std;

int main(void)
{
    double p = -1, n = -1, V = -1, T = -1;
    string s;
    stringstream ss (stringstream::in | stringstream:: out);
    for (int i = 0; i < 3; i++)
    {
        getline(cin, s);
        ss << s.substr(4);
        int value;
        ss >> value;
        // XXX
        cerr << value;
        if (s[0] == 'p')
            p = value;
        else if (s[0] == 'n')
            n = value;
        else if (s[0] == 'V')
            V = value;
        else
            T = value;
    }
}
