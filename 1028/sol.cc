#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<int> levels(n);
    vector< pair<int, int> > stars(n);
    for (int i = 0; i < n; i++)
        cin >> stars.at(i).first >> stars.at(i).second;
    for (int i = 0; i < n; i++)
    {
        int c = 0;
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            if (stars.at(j).first <= stars.at(i).first && 
                stars.at(j).second <= stars.at(i).second)
                c++;
        }
        levels.at(c)++;
    }
    for (int i = 0; i < n; i++)
        cout << levels.at(i) << endl;
}
