#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<string> v(n);
    getline(cin, v.at(0));
    for (int i = 0; i < n; i++)
        getline(cin, v.at(i));
    char c;
    cin >> c;
    for (int i = 0; i < n; i++)
        if (v.at(i)[0] == c)
            cout << v.at(i) << endl;
}
