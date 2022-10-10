#include <stdio.h>
    // Write a function to print first N natural numbers (TSRN)
void natural(int);  // Function Declaration.
int main()
{
    int n;
    printf("Enter the number to print Natural Number.: ");
    scanf("%d", &n);

    printf("First %d Natural number are : ", n);
    natural(n);  // Function Call.

    printf("\n");
    return 0;
}

void natural(int a)   // Function Definition.
{
    for (int i=1; i<=a; i++)
    {
        printf("%d ", i);
    }
}
