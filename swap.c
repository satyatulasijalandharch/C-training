#include <stdio.h>
void main()
{
    int a, b, temp;
    printf("Enter 1st Number: ");
    scanf("%d", &a);
    printf("Enter 2nd Number: ");
    scanf("%d", &b);

    printf("\nBefore Swapping....");
    printf("\nA=%d, B=%d", a, b);

    temp = a;
    a = b;
    b = temp;
    printf("\nAfter Swapping....");
    printf("\nA=%d, B=%d", a, b);
}