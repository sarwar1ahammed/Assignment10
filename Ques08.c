#include <stdio.h>
/*
    Calculate the number of arrangements one can make from n items
    and r selected at a time. (TSRS)
*/
int fact(int);
int arrang(int, int);
int main()
{
    int a, b;
    printf("Enter value of n : ");
    scanf("%d", &a);
    printf("Enter value of r : ");
    scanf("%d", &b);

    printf("Arrangements is : %d", arrang(a, b));

    printf("\n");
    return 0;
}
int fact(int n)
{
    int factorial = 1;
    for(int i=1; i<=n; i++)
        factorial = factorial * i;
    return factorial;
}
int arrang (int n, int r)
{
    int arrangements = fact(n)/fact(n-r);
    return arrangements;
}
