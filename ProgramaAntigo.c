#include <stdio.h>
#include <stdlib.h>
int emanos(ano)
{
    int idade;
    idade=2019-ano;
    printf("%d anos\n", idade);
}
int emmes(ano)
{
    int mes;
    mes=(2019-ano)*12;
    printf("%d meses\n", mes);
}
int emdias(ano)
{
    int dia;
    dia=(2019-ano)*365;
    printf("%d dias\n", dia);
}

int main()
{
    int ano;
    printf("Digite seu ano de nascimento: ");
    scanf("%d\n", &ano);
    emanos(ano);
    emmes(ano);
    emdias(ano);
    system("pause");
    return 0;
}
