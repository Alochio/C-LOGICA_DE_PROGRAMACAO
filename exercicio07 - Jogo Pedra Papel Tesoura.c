/*
    A IDEIA DESTE EXERCICIO ERA REALIZAR A CRIAÇÃO DE UM JOGO SIMPLES DE
    PEDRA PAPEL E TESOURA ENTRE DOIS JOGADORES, ONDE NESSE EXERCICIO EU
    DECIDI IMPLEMENTAR UMA FUNÇÃO PARA RECONHECER O VENCEDOR DO JOGO E
    EXIBIR NA TELA O RESULTADO.
*/
#include <stdio.h>
#include <stdlib.h>

void resultado(char player1_Nome[256], char player2_Nome[256], char player1_Jogada[256], char player2_Jogada[256]);

int main()
{
    char
        player1_Nome[256],
        player2_Nome[256],
        player1_Jogada[256],
        player2_Jogada[256];

    printf("Sejam bem vindos ao jogo PEDRA PAPEL TESOURA\n\n");

    printf("Player 1 - Digite o seu nome: ");
    scanf("%s", &player1_Nome);
    printf("Player 2 - Digite o seu nome: ");
    scanf("%s", &player2_Nome);

    system("cls");

    printf("Informacoes:\nPlayer 1: %s\nPlayer 2: %s\n\n", player1_Nome, player2_Nome);
    system("pause");
    system("cls");

    printf("%s, digite a sua jogada: ", player1_Nome);
    scanf("%s", &player1_Jogada);
    system("cls");

    printf("%s, digite a sua jogada: ", player2_Nome);
    scanf("%s", &player2_Jogada);
    system("cls");

    resultado(player1_Nome, player2_Nome, player1_Jogada, player2_Jogada);

    return 0;
}

void resultado(char player1_Nome[256], char player2_Nome[256], char player1_Jogada[256], char player2_Jogada[256]){

    printf("Resultado do jogo: ");

    if(strcmp(player1_Jogada, "pedra") == 0){
        if(strcmp(player2_Jogada, "pedra") == 0)
            printf("Empate!!\n\n");
        else if (strcmp(player2_Jogada, "papel") == 0)
            printf("%s, voce venceu!!!\n\n", player2_Nome);
        else if (strcmp(player2_Jogada, "tesoura") == 0)
            printf("%s, voce venceu!!!\n\n", player1_Nome);
        else
            printf("%s, sua jogada eh invalida!!\n\n",player2_Nome);
    }
    else if (strcmp(player1_Jogada, "papel") == 0){
        if(strcmp(player2_Jogada, "pedra") == 0)
            printf("%s, voce venceu!!!\n\n", player1_Nome);
        else if (strcmp(player2_Jogada, "papel") == 0)
            printf("Empate!!\n\n");
        else if (strcmp(player2_Jogada, "tesoura") == 0)
            printf("%s, voce venceu!!!\n\n", player2_Nome);
        else
            printf("%s, sua jogada eh invalida!!\n\n",player2_Nome);
    }
    else if (strcmp(player1_Jogada, "tesoura") == 0){
        if(strcmp(player2_Jogada, "pedra") == 0)
            printf("%s, voce venceu!!!\n\n", player2_Nome);
        else if (strcmp(player2_Jogada, "papel") == 0)
            printf("%s, voce venceu!!!\n\n", player1_Nome);
        else if (strcmp(player2_Jogada, "tesoura") == 0)
            printf("Empate!!\n\n");
        else
            printf("%s, sua jogada eh invalida!!\n\n",player2_Nome);
    }
    else
        printf("%s, sua jogada eh invalida!!\n\n", player1_Nome);
}