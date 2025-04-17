#include <stdio.h>

int main()
{
    int n1,n2,n3;
    printf("Digite três números (Ex.: X X X)\n");
    scanf("%d %d %d",&n1,&n2,&n3);
    if(n1>n2&&n1>n3)
    {
        printf("O primeiro número é o maior.");
    }
    else if(n2>n1&&n2>n3)
    {
        printf("O segundo número é o maior.");
    }
    else if(n3>n1&&n3>n2)
    {
        printf("O terceiro número é o maior.");
    }
    else
    {
        printf("Os três números são iguais.");
    }
    return 0;
}