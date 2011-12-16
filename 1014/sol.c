// FIXME OPTIMISE SELECTION OF TESTING CANDIDATES

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

#include <stdio.h>

int poss(int n)
{
    for (int i = 2; i <= 9; i++)
        while (n % i == 0)
            n /= i;
    return n == 1;
}

int query(int Q)
{
    int p = 1;
    if (Q >= 1000000000)
        return 0;
    if (Q >= 100000000)
        p *= Q % 1000000000 / 100000000;
    if (Q >= 10000000)
        p *= Q % 100000000 / 10000000;
    if (Q >= 1000000)
        p *= Q % 10000000 / 1000000;
    if (Q >= 100000)
        p *= Q % 1000000 / 100000;
    if (Q >= 10000)
        p *= Q % 100000 / 10000;
    if (Q >= 1000)
        p *= Q % 10000 / 1000;
    if (Q >= 100)
        p *= Q % 1000 / 100;
    if (Q >= 10)
        p *= Q % 100 / 10;
    if (Q >= 1)
        p *= Q % 10;
    return p;
}

int main(void)
{
    int N;
    scanf("%d", &N);
    if (!poss(N))
        printf("-1\n");
    else
    {
        int Q = 1;
        while (query(Q) != N)
        {
            Q++;
        }
        printf("%d\n", Q);
    }
}
