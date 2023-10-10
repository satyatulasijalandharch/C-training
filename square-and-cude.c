#include <stdio.h>

void main()
{
    int n, sqre, cube;
    printf("Enter Number: ");
    scanf("%d", &n);

    sqre = n * n;
    cube = n * n * n;

    printf("\nSquare: %d\nCube: %d", sqre, cube);
}