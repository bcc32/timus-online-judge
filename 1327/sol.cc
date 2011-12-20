#include <iostream>
using namespace std;

int main(void)
{
    int A, B;
    cin >> A >> B;
    if (A % 2 == 0)
        A++;
    if (B % 2 == 0)
        B--;
    cout << (B - A) / 2 + 1 << endl;
}
