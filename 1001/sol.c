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

