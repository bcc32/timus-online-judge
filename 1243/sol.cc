#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string num;
    getline(cin, num);
    int sum = 0;
    int p = 1;
    for (int i = 0; i < num.size(); i++)
    {
        sum += p * ((int)num[num.size() - i - 1] - (int)'0');
        sum %= 7;
        p *= 3;
        p %= 7;
    }
    cout << sum << endl;
}
