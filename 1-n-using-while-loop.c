#include<stdio.h>
void main()
{
    int i=1, n;
    printf("Enetr n: ");
    scanf("%d", &n);
    while(i<=n)
    {
        printf("%d\t", i);
        i++;
    }
}