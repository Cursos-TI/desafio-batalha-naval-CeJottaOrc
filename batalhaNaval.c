#include <stdio.h>

#define linha 10
#define coluna 10

int main(){

    //VARIÁVEIS
int tabuleiro[linha][coluna];
int contagem = 1;

//HABILIDADES:

//CONE
int cone[3][5] = 
{
    {0,0,1,0,0,},
    {0,1,1,1,0,},
    {1,1,1,1,1}
};//POSIÇÃO NO TABULEIRO
int lin_con = 3;
int col_con = 1;

//OCTA
int octa[3][5] = 
{
    {0,0,1,0,0,},
    {0,1,1,1,0,},
    {0,0,1,0,0}
};//POSIÇÃO NO TABULEIRO
int lin_octa = 0;
int col_octa = 5;

//CRUZ
int cruz[3][5] = 
{
    {0,0,1,0,0,},
    {1,1,1,1,1,},
    {0,0,1,0,0}
};//POSIÇÃO NO TABULEIRO
int lin_cruz = 7;
int col_cruz = 4;

//CRIAÇÃO DAS MATRIZES:

//TABULEIRO
for(int i = 0; i < linha; i++)
{
    for (int j = 0; j < coluna; j++)
    {
        tabuleiro[i][j] = 0;
    }
}
//CONE
for (int i = 0; i < 3;i++)
{
    for (int j = 0; j < 5;j++)
    {
        tabuleiro[lin_con + i][col_con + j] = cone [i][j];
    }
}

//OCTA
for (int i = 0; i < 3;i++)
{
    for (int j = 0; j < 5;j++)
    {
        tabuleiro[lin_octa + i][col_octa + j] = octa [i][j];
    }
}

//CRUZ
for (int i = 0; i < 3;i++)
{
    for (int j = 0; j < 5;j++)
    {
        tabuleiro[lin_cruz + i][col_cruz + j] = cruz [i][j];
    }
}

//EXIBIR TABULEIRO

//LETRAS QUE REPRESENTAM AS COLUNAS
printf ("    A B C D E F G H I J\n");


for (int i = 0; i < linha; i++)
{
    printf("%2i. ", contagem++);
    for (int j = 0; j < coluna; j++)
    {
        printf("%i ", tabuleiro[i][j]);
    }
    printf("\n");
}
}