#include <stdio.h>

int main()
{
    int n,u,s=0;
    printf("Insira um número positivo: ");
    scanf("%d",&u);
    if(u<0)
    {
        printf("Número inválido. Programa encerrado.");
    }
    else
    {
        for(n=1;n<=u;n++)
        {
            s=s+n;
            printf("%d\n",s);
        }
    }
    return 0;
}