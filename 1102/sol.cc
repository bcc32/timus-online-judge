#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<string> cand;
    cand.push_back("puton");
    cand.push_back("out");
    cand.push_back("output");
    cand.push_back("in");
    cand.push_back("input");
    cand.push_back("one");
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        vector<string> poss;
        for (vector<string>::iterator x = cand.begin(); x < cand.end(); x++)
        {
            bool possible = true;
            for (int i = 0; i < (*x.size()); i++)
                if (*(x[i]) != s[i])
                {
                    possible = false;
                    break;
                }
            if (possible)
                poss.push_back(*x);
        }
    }
}
