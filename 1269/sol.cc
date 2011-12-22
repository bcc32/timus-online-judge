// FIXME SLOW

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void)
{
    vector<string> v;
    int n;
    cin >> n;
    string line;
    getline(cin, line);
    for (int i = 0; i < n; i++)
    {
        getline(cin, line);
        v.push_back(line);
    }
    cin >> n;
    getline(cin, line);
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        getline(cin, line);
        int m = line.size();
        for (int j = 0; j < v.size(); j++)
        {
            size_t f = line.find(v.at(j));
            if (f != string::npos)
            {
                if (int(f) + 1 < m)
                    m = int(f) + 1;
                found = true;
            }
        }
        if (found)
        {
            cout << i + 1 << " " << m << endl;
            break;
        }
    }
    if (!found)
        cout << "Passed" << endl;
}
