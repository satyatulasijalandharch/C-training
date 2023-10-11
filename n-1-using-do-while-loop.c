#include<stdio.h>
void main()
{
    int i=1, n;
    printf("Enetr n: ");
    scanf("%d", &n);
    i=n;
    do
    {
        printf("%d\t", i);
        i--;
    }while (i>=1);
    
}