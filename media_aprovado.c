#include <stdio.h>

int main()
{
    double n1,n2,n3;
    printf("Insira a primeira nota parcial do aluno (0 a 10): ");
    scanf("%lf",&n1);
    if(n1<0||n1>10)
    {
        printf("Nota inválida. Programa encerrado.");
    }
    else
    {
        printf("Insira a segunda nota parcial do aluno: ");
        scanf("%lf",&n2);
        if(n2<0||n2>10)
        {
            printf("Nota inválida. programa encerrado.");
        }
        else
        {
            printf("Insira a terceira nota parcial do aluno: ");
            scanf("%lf",&n3);
            if(n3<0||n3>10)
            {
                printf("Nota inválida. programa encerrado.");
            }
            else
            {
                if((n1+n2+n3)/3>=6)
                {
                    printf("Aluno aprovado.");
                }
                else if((n1+n2+n3)/3>=4)
                {
                    printf("Aluno em recuperação.");
                }
                else
                {
                    printf("Aluno reprovado.");
                }
            }
        }
    }
    return 0;
}