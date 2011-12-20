#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<int> db(n);
    for (int i = 0; i < n; i++)
        cin >> db.at(i);
    sort(db.begin(), db.end());
    string line;
    getline(cin, line);
    getline(cin, line);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cout << db.at(x - 1) << endl;
    }
}
