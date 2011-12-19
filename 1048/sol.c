// FIXME

#include <stdio.h>
#include <stdlib.h>

void reverse(char *str, int size)
{
    for (int i = 0; 2 * i + 1 < size; i++)
        if (str[i] != str[size - i - 1])
        {
            str[i] ^= str[size - i - 1];
            str[size - i - 1] ^= str[i];
            str[i] ^= str[size - i - 1];
        }
}

int main(void)
{
    int n, carry = 0;
    scanf("%d", &n);
    int *digits = (int *) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        digits[i] = x + y;
    }
    int size = n;
    if (digits[0] > 9)
        size++;
    char *output = (char *) malloc(size * sizeof(char));
    for (int i = n - 1; i > -1; i--)
    {
        int x = digits[i];
        if (carry)
            x++;
        if (x > 9)
            carry = 1;
        else
            carry = 0;
        sprintf(output, "%s%d", output, x % 10);
    }
    if (carry)
        sprintf(output, "%s%d", output, 1);
    reverse(output, size);
    printf("%s\n", output);
}
