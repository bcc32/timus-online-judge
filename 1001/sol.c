/*
 * Aaron Zeng
 * 2011.12.14
 * 
 * 1001: Reverse Root
 * 
 * Time Limit: 2.0 second
 * Memory Limit: 16 MB
 * 
 * The problem is so easy, that the authors were lazy to write a 
 * statement for it!
 * 
 * Input: The input stream contains a set of integer numbers A_i 
 * (0 <= A_i <= 10^18).  The numbers are separated by any number of 
 * spaces and line breaks.  A size of the input stream does not exceed 
 * 256 KB.
 * 
 * Output: For each number A_i from the last one till the first one you 
 * should output its square root.  Each square root should be printed 
 * in a separate line with at least four digits after decimal point.
 * 
 * Sample:
 * input                    output
 *  1427  0                 2297.0716
 *                          936297014.1164
 *  876652098643267843      0.0000
 *  5276538                 37.7757
 */

#include <stdio.h>
#include <math.h>

#define MAX_ARRAY_LEN (256 * 1024) / 2
static unsigned long long int num_array[MAX_ARRAY_LEN];

int main(void)
{
    long int pointer = 0;
    while (scanf("%lld", &num_array[pointer]) != EOF) {
        pointer++;
    }
    while (pointer > 0) {
        printf("%0.04f\n", sqrt((double)num_array[-1 + pointer--]));
    }
    return 0;
}

