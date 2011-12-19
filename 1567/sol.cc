#include <iostream>
#include <string>
using namespace std;

int trans(char ch)
{
    switch (ch)
    {
        case 'a':
        case 'd':
        case 'g':
        case 'j':
        case 'm':
        case 'p':
        case 's':
        case 'v':
        case 'y':
        case '.':
        case ' ':
            return 1;
            break;
        case 'b':
        case 'e':
        case 'h':
        case 'k':
        case 'n':
        case 'q':
        case 't':
        case 'w':
        case 'z':
        case ',':
            return 2;
            break;
        default:
            return 3;
            break;
    }
}

int main(void)
{
    string line;
    getline(cin, line);
    int sum = 0;
    for (int i = 0; i < line.size(); i++)
        sum += trans(line[i]);
    cout << sum << endl;
}
