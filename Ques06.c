#include <stdio.h>
    // A function to calculate the factorial of a number. (TSRS)

int fact(int);  // Function Declaration .
int main()
{
    int n;
    printf("Enter a number to find the Factorial.: ");
    scanf("%d", &n);
    printf("Factorial of %d is : %d", n, fact(n));  // Fuction Call.
    printf("\n");
    return 0;
}

int fact(int a)  // Function Definition. 
{
    int i, factorial=1;
    for(i=1; i<=a; i++)
    {
        factorial = factorial * i;       
    }
    
    return factorial;
}

