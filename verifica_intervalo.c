#include <stdio.h>

int main()
{
    int u;
    printf("Insira um número: ");
    scanf("%d",&u);
    if(u>=0&&u<=100)
    {
        printf("Este número está entre 0 e 100.");
    }
    else
    {
        printf("Este número não está entre 0 e 100.");
    }
    return 0;
}