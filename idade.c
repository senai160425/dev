#include <stdio.h>

int main()
{
    int i;
    printf("Digite a sua idade: ");
    scanf("%d",&i);
    if(i<0)
    {
        printf("Idade inválida. Programa encerrado.");
    }
    else if(i<12)
    {
        printf("Criança.");
    }
    else if(i<18)
    {
        printf("Adolescente.");
    }
    else
    {
        printf("Adulto.");
    }
    return 0;
}