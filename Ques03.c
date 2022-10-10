#include <stdio.h>
    /* 
        A function to check whether a given number is even or odd. 
        Return 1 if the number is even, otherwise return 0. (TSRS)
    */
int num(int);  // Function Definition.
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    num(n);    // Function Call or Actual Argument.

    printf("\n");
    return 0;
}

int num(int x)     // Function Declaration or Formal Argument.
{
    if (x % 2 == 0)
    {
        printf("Even Number.");
        return 1;
    }
    printf("Odd Number.");
    return 0;
    
}
