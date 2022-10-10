#include <stdio.h>
    // A function to calculate the area of a circle. (TSRS)

float area(float);
int main()
{
    float a;
    printf("Enter the value of radius : ");
    scanf("%f", &a);
    printf("The Area of the Circle is : %.2f", area(a));
    printf("\n");
    return 0;
}

float area(float r) // Function Definition.
{
    float cirArea;
    cirArea = 3.14 * r * r;
    return cirArea;
}
