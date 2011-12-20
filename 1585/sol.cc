#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int n, c[3] = {0};
    string line;
    cin >> n;
    getline(cin, line); // FLUSH TO END OF LINE
    for (int i = 0; i < n; i++)
    {
        getline(cin, line);
        if (line[0] == 'E')
            c[0]++;
        else if (line[0] == 'L')
            c[1]++;
        else
            c[2]++;
    }
    if (c[0] > c[1] && c[0] > c[2])
        cout << "Emperor Penguin" << endl;
    else if (c[1] > c[0] && c[1] > c[2])
        cout << "Little Penguin" << endl;
    else
        cout << "Macaroni Penguin" << endl;
}
