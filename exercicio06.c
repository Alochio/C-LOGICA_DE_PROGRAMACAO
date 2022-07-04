/*
    NESTE CÓDIGO UTILIZAMOS ALGUNS TRABALHOS COM STRING,
    COLETANDO AS INFORMAÇÕES DO USUARIO, IMPRIMINDO O NOME
    E TAMBÉM SOMENTE A INICIAL, E TALBÉM FOI UTILIZADO UM
    MÉTODO MATEMÁTICO PARA DESCOBRIR O ANO DE NASCIMENTO DO
    USUARIO, UTILIZANDO O CONDICIONAL IF.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[100];
    char fezAniversario[100];
    int idade, anoAtual, anoNascimento, aux;
    anoAtual = 2022;

    printf("Ola, digite o seu nome: ");
    scanf("%s", nome);
    printf("Como voce esta %s?\nAgora digite a sua idade: ", nome);
    scanf("%d", &idade);
    printf("Voce ja fez aniversario esse ano? (sim ou nao): ");
    scanf("%s", fezAniversario);
    system("cls");
    printf("Informacoes do usuario:\n");
    printf("Nome: %s\n", nome);
    printf("Idade :%d\n", idade);
    printf("Primeira letra do nome: %c\n", nome[0]);


    if(fezAniversario[0] == 's')
        aux = 0;
    else if (fezAniversario[0] == 'n')
        aux = 1;

    if(aux == 0)
        anoNascimento = anoAtual - idade;
    else if(aux == 1)
        anoNascimento = (anoAtual - idade) - 1;

    printf("Ano de nascimento: %d\n", anoNascimento);

    return 0;
}