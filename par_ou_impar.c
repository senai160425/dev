#include <stdio.h>

int main()
{
    int n;
    printf("Digite um número: ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("Este número é par.");
    }
    else
    {
        printf("Este número é impar.");
    }
    return 0;
}