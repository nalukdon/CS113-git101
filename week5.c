#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
int prime(int x)
{
    if (x%2==0)
    {
        printf("YesYesYes");
    }
    else
    {
        printf("NoNoNo");
    }
}
int main()
{
    char n[5];
    fgets(n, 5, stdin);
    int d;
    d = atoi(n);
    prime(d);
    printf("%d",pow(abs(-1),2));
}

