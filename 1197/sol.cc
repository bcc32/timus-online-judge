#include <iostream>
using namespace std;

int poss(int file, int rank)
{
    switch(file)
    {
        case 1:
        case 8:
            if (rank == 1 || rank == 8)
                return 2;
            else if (rank == 2 || rank == 7)
                return 3;
            else
                return 4;
            break;
        case 2:
        case 7:
            if (rank == 1 || rank == 8)
                return 3;
            else if (rank == 2 || rank == 7)
                return 4;
            else
                return 6;
            break;
        default:
            if (rank == 1 || rank == 8)
                return 4;
            else if (rank == 2 || rank == 7)
                return 6;
            else
                return 8;
            break;
    }
}

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char a;
        int b;
        cin >> a >> b;
        cout << poss((int) a - (int) 'a' + 1, b) << endl;
    }
}
