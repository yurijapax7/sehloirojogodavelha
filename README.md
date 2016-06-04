JOGO DA VELHA
#include<stdio.h>

int main()

{
    char Matriz[3][3];
    char O='O', X='X';
    int movimentos=0,j,i;


    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            Matriz[i][j]=' ';

    while(movimentos<=9)
        {
        printf("  JOGO DA VELHA \n");
        {
            printf("\t\t\t %c | %c | %c \n\t\t\t___ ___ ___\n\n\t\t\t %c | %c | %c \n\t\t\t___ ___ ___\n\n\t\t\t %c | %c | %c \n",Matriz[0][0],Matriz[0][1],Matriz[0][2],Matriz[1][0],Matriz[1][1],Matriz[1][2],Matriz[2][0],Matriz[2][1],Matriz[2][2]);
        }

        printf("\n\n\n\n\n\n\n\n\n\n\n\nINSIRA AS COORDENADAS, ");
        if(movimentos%2)printf("PLAYER 2\nLINHA: ");
        else printf("PLAYER 1\nLINHA: ");

        scanf("%d",&i);
        printf("COLUNA: ");
        scanf("%d",&j);

        if(Matriz[i-1][j-1]==' ')
        {
            if(movimentos%2)Matriz[i-1][j-1]=X;
            else Matriz[i-1][j-1]=O;
            movimentos++;
        }


        if((Matriz[0][0]==O && Matriz[0][1]==O && Matriz[0][2]==O)||
           (Matriz[1][0]==O && Matriz[1][1]==O && Matriz[1][2]==O)||
           (Matriz[2][0]==O && Matriz[2][1]==O && Matriz[2][2]==O)||
           (Matriz[0][0]==O && Matriz[1][0]==O && Matriz[2][0]==O)||
           (Matriz[0][1]==O && Matriz[1][1]==O && Matriz[2][1]==O)||
           (Matriz[0][2]==O && Matriz[1][2]==O && Matriz[2][2]==O)||
           (Matriz[0][0]==O && Matriz[1][1]==O && Matriz[2][2]==O)||
           (Matriz[0][2]==O && Matriz[1][1]==O && Matriz[2][0]==O))
        {
            printf("\n\n\t\tJogador 1, VOCE VENCEU!!!");
            break;
        }
        if((Matriz[0][0]==X && Matriz[0][1]==X && Matriz[0][2]==X)||
           (Matriz[1][0]==X && Matriz[1][1]==X && Matriz[1][2]==X)||
           (Matriz[2][0]==X && Matriz[2][1]==X && Matriz[2][2]==X)||
           (Matriz[0][0]==X && Matriz[1][0]==X && Matriz[2][0]==X)||
           (Matriz[0][1]==X && Matriz[1][1]==X && Matriz[2][1]==X)||
           (Matriz[0][2]==X && Matriz[1][2]==X && Matriz[2][2]==X)||
           (Matriz[0][0]==X && Matriz[1][1]==X && Matriz[2][2]==X)||
           (Matriz[0][2]==X && Matriz[1][1]==X && Matriz[2][0]==X))
        {
            printf("\n\n\t\tJogador 2, VOCE VENCEU!!!");
            break;
        }

        if(movimentos==9)
        {
            printf("PARTIDA EMPATADA");
            break;
        }

    }
    getch();
    return(0);
}
