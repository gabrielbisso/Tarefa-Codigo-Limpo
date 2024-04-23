#include <stdio.h>
#include <stdlib.h>
int main()
{
    int ano, opcao;
    printf("Digite seu anoo de nascimento: ");
    scanf("%d", &ano);
    printf("\n");
    int idade;
    idade=2019-ano;
    printf("%d anos", idade);
    printf("\n");
    int mes;
    mes=(2019-ano)*12;
    printf("%d meses", mes);
    printf("\n");
    int dia;
    dia=(2019-ano)*365;
    printf("%d dias", dia);
    printf("\n");
    system("pause");
    return 0;
}
