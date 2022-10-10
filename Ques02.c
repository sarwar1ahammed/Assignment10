#include <stdio.h>
    // A function to calculate simple interest. (TSRS)
float simInt(float, float, float);  // Function Declaration.
int main()
{
    float amou, inte, time;
    printf("Enter initial amount (p): ");
    scanf("%f", &amou);
    printf("Entet interest (i): ");
    scanf("%f", &inte);
    printf("Enter time period (t): ");
    scanf("%f", &time);

    printf("Simple Interest of the given Amount is : %.2f", simInt(amou, inte, time));   // Function Call.

    printf("\n");
    return 0;
}

float simInt(float p, float r, float t)  // Function Definition. 
{
    float totalAmount;
    totalAmount = (p * r * t)/ 100;
    return totalAmount;

}
