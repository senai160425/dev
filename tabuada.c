#include <stdio.h>

int main()
{
    int t,u;
    printf("Insira um número: ");
    scanf("%d",&u);
    for(t=1;t<=10;t++)
    {
        printf("%d\n",t*u);
    }
    return 0;
}