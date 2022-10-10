#include <stdio.h>
    // A function to print first N odd natural numbers. (TSRN)

void odd(int);
int main()
{
    int n;
    printf("Enter a number to print odd natural number.: ");
    scanf("%d", &n);
    printf("First %d Odd Natural number are : ", n);
    odd(n);
    printf("\n");
    return 0;
}

void odd (int a)
{
    int i=1;
        while (i<=a*2)
        {
            // if (i % 2 == 1)
                 printf("%d ", i);
                 i+=2;
        }
}
