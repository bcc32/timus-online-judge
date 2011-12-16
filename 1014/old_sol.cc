/*
 * Aaron Zeng
 * 2011.12.14
 * 
 * 1014: Product of Digits
 * 
 * Time Limit: 1.0 second
 * Memory Limit: 16 MB
 * 
 * Your task is to find the minimal positive integer number Q so that 
 * the product of digits of Q is exactly equal to N.
 * 
 * Input: The input contains the single number N (0 <= N <= 10^9).
 * 
 * Output: Your program should print to the output the only number Q.
 * If such a number does not exist print -1.
 */

#include <iostream>
#include <sstream>
using namespace std;

int poss(int n)
{
    for (int i = 2; i <= 9; i++)
        while (n % i == 0)
            n /= i;
    return n == 1;
}

int query(int Q, int N)
{
    stringstream ss;
    ss << Q;
    string s = ss.str();
    int p = 1;
    for (int i = 0; i < s.size(); i++)
        p *= (int) s[i] - (int) '0';
    return p == N;
}

int main(void)
{
    int N;
    cin >> N;
    if (!poss(N))
        cout << -1 << endl;
    else
    {
        int Q = 1;
        while (!query(Q, N))
            Q++;
        cout << Q << endl;
    }
}
