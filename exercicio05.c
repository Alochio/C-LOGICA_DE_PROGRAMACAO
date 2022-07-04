/*
    ESTE CÓDIGO TEM O OBJETIVO SOMENTE DE REALIZAR A LEITURA DE
    ALGUMAS INFORMAÇÕES E REALIZAR A IMPRESSÃO DAS MESMAS NO FINAL.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[100];
    char sobrenome[100];
    int idade;

    printf("Digite o seu nome: ");
    scanf("%s", nome);
    printf("Ola %s, seja bem vindo!!\nDigite o seu sobrenome: ", nome);
    scanf("%s", sobrenome);
    printf("\nAgora digite a sua idade: ");
    scanf("%d", &idade);
    system("cls"); //COMANDO UTILIZADO PARA LIMPAR A TELA
    printf("INFORMACOES DO USUARIO:\nNome: %s %s\nIdade: %d\n\n", nome, sobrenome, idade);

    return 0;
}