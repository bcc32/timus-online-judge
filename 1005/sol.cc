/*
 * Aaron Zeng
 * 2011.12.14
 * 
 * 1005: Stone Pile
 * Time Limit: 2.0 second
 * Memory Limit: 16 MB
 * 
 * You have a number of stones with known weights W_1, ..., W_n. Write 
 * a program that will rearrange the stones into two piles such that 
 * weight difference between the piles is minimal.
 * 
 * Input: Input contains the number of stones N (1 <= N <= 20) and 
 * weights of the stones W_1, ..., W_N (integers, 1 <= W_i <= 100000) 
 * delimited by white spaces.
 * 
 * Output: Your program should output a number representing the minimal 
 * possible weight difference between stone piles
 * 
 * Sample:
 * input            output
 * 5                3
 * 5 8 13 27 14
 */

#include <iostream>
#include <vector>
using namespace std;

int p2(int n)
{
    int p = 1;
    for (int i = 0; i < n; i++)
        p *= 2;
    return p;
}

int sum(vector<int> v)
{
    int s = 0;
    for (int i = 0; i < v.size(); i++)
        s += v.at(i);
    return s;
}

int main(void)
{
    int n;
    cin >> n;
    vector<int> v(n), a(n);
    for (int i = 0; i < n; i++)
        cin >> v.at(i);
    int x = p2(n);
    int g = sum(v);
    int m = sum(v);
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < n; j++)
            if ((i >> j) % 2)
                a.push_back(v.at(j));
        int y = sum(a) * 2 > g ? sum(a) * 2 - g : g - sum(a) * 2;
        if (y < m)
            m = y;
        a.clear();
    }
    cout << m << endl;
}
