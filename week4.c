#include <stdio.h>
#include <stdlib.h>
int isEven(int x)
{
    if (x%2==0)
       return 1;
    else
       return 0;
}
int main()
{
    char n[5];
    fgets(n, 5, stdin);
    int d;
    d = atoi(n);
    printf("%d",isEven(d));

}