#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter the number of rows or columns: ");
    scanf("%d",&n);
    int a[n][n];
    int d=0;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            a[i][j] = j+1+d;
        }
        d++;
    }
     for(i=0;i<n;i++) 
     {
        for(j=0;j<n;j++)
           printf("%2d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
