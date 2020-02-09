#include <stdio.h>
void plus(int *);

int main()
{
    char item[25] ="Computer Programming";
    char *a1=&item[0], *a2;
    printf("%s\n",a1);
    a2 =&item[5];
    printf("%s\n",a2);
    a2 =&item[8];
    printf("%s\n",a2);

    int a = 3;
    int b = 4;
    plus(&a);
    plus(&b);
    printf("%d",a);
    printf("%d",b);

}

void plus(int *n)
{
    *n = *n + *n;
}
