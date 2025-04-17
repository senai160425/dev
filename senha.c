#include <stdio.h>

int main()
{
    int s;
    printf("Digite a senha: ");
    scanf("%d",&s);
    while(s!=1234)
    {
        printf("Senha incorreta, tente novamente: ");
        scanf("%d",&s);
    }
    if(s==1234)
    {
        printf("Senha correta.");
    }
    return 0;
}