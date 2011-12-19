#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(void)
{
    int c = 0;
    set<string> stores;
    int n;
    cin >> n;
    string s;
    getline(cin, s); // get rest of first line
    for (int i = 0; i < n; i++)
    {
        getline(cin, s);
        if (stores.find(s) != stores.end())
            c++;
        else
            stores.insert(s);
    }
    cout << c << endl;
}
