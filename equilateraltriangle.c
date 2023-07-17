#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter one side of triangle: ");
    scanf("%d",&a);
    printf("Enter second side of triangle: ");
    scanf("%d",&b);
    printf("Enter third side of the triangle: ");
    scanf("%d",&c);
    (a == b && b == c)? printf("triangle is equilateral")
    :printf("triangle is not equilateral");
    return 0;
}