#include <iostream>
using namespace std;

int main(void)
{
    int current = 0, c = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == current)
            c++;
        else
        {
            if (current != 0)
                cout << c << " " << current << " ";
            current = x;
            c = 1;
        }
    }
    cout << c << " " << current << endl;
}
