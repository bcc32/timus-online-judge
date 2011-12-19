#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class team
{
    public:
        int id, score;
};

bool comp(team x, team y)
{
    return x.score > y.score; // sort in reverse order
}

int main(void)
{
    int n;
    cin >> n;
    vector<team> v(n);
    for (int i = 0; i < n; i++)
        cin >> v.at(i).id >> v.at(i).score;
    stable_sort(v.begin(), v.end(), comp);
    for (int i = 0; i < n; i++)
        cout << v.at(i).id << " " << v.at(i).score << endl;
}
