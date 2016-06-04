JOGO DA VELHA

#include<stdio.h>

int main()

{
char posicao[3][3];
char O='O', X='X';
int movimentos=0,coluna,linha,jogador1,jogador2,empate;
char nome1[15],nome2[15];
for(linha=0;linha<3;linha++)
    for(coluna=0;coluna<3;coluna++)
    {
    posicao[linha][coluna]=' ';
    }
printf("\n\n DIGITE O NOME DO JOGADOR 1:");
scanf("%s",nome1);
printf("\n\n DIGITE O NOME DO JOGADOR 2:");
scanf("%s",nome2);
system("cls");
printf("%s, VOCE IRA JOGAR UTILIZANDO A SIMBOLOGIA O \n\n",nome1);
printf("%s, VOCE IRA JOGAR UTILIZANDO A SIMBOLOGIA  X \n\n\n\nPRESSIONE QUALQUER TECLA PARA CONTINUAR",nome2);
getch();
system("cls");
    while(movimentos<=9)
    {
    printf("  JOGO DA VELHA \n\n\n");
    printf("\t\t\t %c | %c | %c                    MOVIMENTOS: %d\n\t\t\t___ ___ ___\n\n\t\t\t %c | %c | %c \n\t\t\t___ ___ ___\n\n\t\t\t %c | %c | %c \n",posicao[0][0],posicao[0][1],posicao[0][2],movimentos,posicao[1][0],posicao[1][1],posicao[1][2],posicao[2][0],posicao[2][1],posicao[2][2]);
    printf("\n\n\n\n\n\n\n\n\n\n\n\nINSIRA AS COORDENADAS DE ");
    if(movimentos%2)printf("%s\nLINHA: ",nome2);
    else printf("%s\nLINHA: ",nome1);
    scanf("%d",&linha);
    printf("COLUNA: ");
    scanf("%d",&coluna);
        if(posicao[linha-1][coluna-1]==' ')
        {
        if(movimentos%2)posicao[linha-1][coluna-1]=X;
        else posicao[linha-1][coluna-1]=O;
        movimentos++;
        }
        if((posicao[0][0]==O && posicao[0][1]==O && posicao[0][2]==O)||
           (posicao[1][0]==O && posicao[1][1]==O && posicao[1][2]==O)||
           (posicao[2][0]==O && posicao[2][1]==O && posicao[2][2]==O)||
           (posicao[0][0]==O && posicao[1][0]==O && posicao[2][0]==O)||
           (posicao[0][1]==O && posicao[1][1]==O && posicao[2][1]==O)||
           (posicao[0][2]==O && posicao[1][2]==O && posicao[2][2]==O)||
           (posicao[0][0]==O && posicao[1][1]==O && posicao[2][2]==O)||
           (posicao[0][2]==O && posicao[1][1]==O && posicao[2][0]==O))
        {
        printf("\n\n\t\t%s, VOCE VENCEU!!!",nome1);
        jogador1++;
        break;
        }
        if((posicao[0][0]==X && posicao[0][1]==X && posicao[0][2]==X)||
           (posicao[1][0]==X && posicao[1][1]==X && posicao[1][2]==X)||
           (posicao[2][0]==X && posicao[2][1]==X && posicao[2][2]==X)||
           (posicao[0][0]==X && posicao[1][0]==X && posicao[2][0]==X)||
           (posicao[0][1]==X && posicao[1][1]==X && posicao[2][1]==X)||
           (posicao[0][2]==X && posicao[1][2]==X && posicao[2][2]==X)||
           (posicao[0][0]==X && posicao[1][1]==X && posicao[2][2]==X)||
           (posicao[0][2]==X && posicao[1][1]==X && posicao[2][0]==X))
        {
        printf("\n\n\t\t%s, VOCE VENCEU!!!",nome2);
        jogador2++;
        break;
        }
        if(movimentos==9)
        {
        printf("PARTIDA EMPATADA");
        empate++;
        break;
        }
    }
getch();
return(0);
}



