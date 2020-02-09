#include <stdio.h>
#include <stdlib.h>
int main()
{
    char a,b,c[10],d[5];
    int gg;
    fgets(c,10,stdin);
    b = getchar();
    gets(d);
    gg = atoi(c);
    if (gg==1)
    {
        printf("noice");
    }
    else
    {
        printf("%c %c",d,b);
    }
    
}

/*char n[5];
    fgets(n, 5, stdin);
    int d;
    d = atoi(n);
    for (int i=0;i<=n;i++)
    {
        if (i%2==0)
        {
            printf("%d ",i);
        }
    }
*/

/*and ใช้ &&
or ใช้ ||
not ใช้ !*/