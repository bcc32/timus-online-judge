// XXX VERY INEFFICIENT
// TODO

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool sat1(vector<char> v)
{
    vector<int> c(26);
    for (int i = 0; i < v.size(); i++)
        c.at((int) v.at(i) - 97)++;
    for (int i = 0; i < c.size(); i++)
        if (c.at(i) > 40000)
            return false;
    return true;
}

bool sat2(vector<char> v)
{
    vector<string> c;
    for (int i = 0; i < v.size() - 1; i++)
    {
    }
}

int main(void)
{
    srand(time(0));
    vector<char> v;
    for (int i = 0; i < 1000000; i++)
    {
        cerr << i << endl;
        v.push_back((char) (rand() % 26 + 97));
        while (!sat1(v) || !sat2(v) || !sat3(v))
        {
            v.pop_back();
            v.push_back((char) (rand() % 25 + 97));
        }
    }
    for (int i = 0; i < 1000000; i++)
        cout << v.at(i);
    cout << endl;
}
