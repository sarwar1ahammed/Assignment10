#include <stdio.h>
    /*
        A function to check whether a given number contains 
        a given digit or not. (TSRS)
    */
int digit(int , int);
int main()
{
    int number, dig;
    printf("Enter a number : ");
    scanf("%d", &number);
    printf("Entet a digit : ");
    scanf("%d", &dig);

    printf("%d", digit(number, dig));

    printf("\n");
    return 0;
}
int digit(int num, int digit)
{
    int remi;
    while(num)
    {
       remi = num % 10;
       if (remi == digit)
        return 1;
       num = num / 10;
    }

    return 0; 
        
}
