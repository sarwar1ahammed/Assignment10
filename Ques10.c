#include <stdio.h>
// A function to print all prime factors of a given number.(TSRN)
void prime(int);
int main()
{
    int number;
    printf("Enter number : ");
    scanf("%d", &number);

    prime(number);

    printf("\n");
    return 0;
}
void prime(int num)
{
    for (int i=2; num != 1; i++)
    {
        while (num % i == 0)
        {
            num = num / i;
            printf("%d ",i);
        }
    }       
    
}
