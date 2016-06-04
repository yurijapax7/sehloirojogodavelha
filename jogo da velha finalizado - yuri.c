#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()

{
setlocale(LC_ALL, "Portuguese");
char posicao[3][3];
int resposta=0;
char O='O', X='X';
int movimentos=0,coluna,linha,jogador1,jogador2,empate;
char nome1[15],nome2[15];
jogador1=0;
jogador2=0;
system("color 0E");
printf("\n\n DIGITE O NOME DO JOGADOR 1(SEM ACENTOS) :");
scanf("%s",nome1);
printf("\n\n DIGITE O NOME DO JOGADOR 2(SEM ACENTOS) :");
scanf("%s",nome2);
system("cls");
printf("%s, VOCÊ IRA JOGAR UTILIZANDO A SIMBOLOGIA O \n\n",strupr(nome1));
printf("%s, VOCÊ IRA JOGAR UTILIZANDO A SIMBOLOGIA X \n\n\n\nPRESSIONE UMA TECLA PARA CONTINUAR...",strupr(nome2));
getch();
system("cls");
    do
    {
    for(linha=0;linha<3;linha++)
        for(coluna=0;coluna<3;coluna++)
        {
        posicao[linha][coluna]=' ';
        }
        while(movimentos<=9)
        {
        printf("\n###############################################################################\n################################ JOGO DA VELHA ################################\n###############################################################################\n\n");
        system("color 0E");
        printf("\n\t\t \t 1   2   3 \n\n");
        printf("\n\n\t\t1\t %c | %c | %c                    MOVIMENTOS: %d\n\t\t \t___ ___ ___\n\n\t\t2\t %c | %c | %c                    VITÓRIAS DE %s: %d\n\t\t \t___ ___ ___\n\n\t\t3\t %c | %c | %c                    VITÓRIAS DE %s: %d\n",posicao[0][0],posicao[0][1],posicao[0][2],movimentos,posicao[1][0],posicao[1][1],posicao[1][2],strupr(nome1),jogador1,posicao[2][0],posicao[2][1],posicao[2][2],strupr(nome2),jogador2);
        printf("\n\n\n\n\n");
        if(movimentos%2)printf("VEZ DE %s < X >\nINSIRA A LINHA: ",strupr(nome2));
        else printf("VEZ DE %s < O >\nINSIRA A LINHA: ",strupr(nome1));
        scanf("%d",&linha);
        printf("E A COLUNA: ");
        scanf("%d",&coluna);
        system("cls");
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
            printf("\n\n\t\tVITÓRIA DE %s COM %d JOGADAS!!!\n\n",strupr(nome1),movimentos);
            jogador1++;
            getch();
            system("cls");
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
            printf("\n\n\t\tVITÓRIA DE %s COM %d JOGADAS!!!\n\n",strupr(nome2),movimentos);
            jogador2++;
            getch();
            system("cls");
            break;
            }
            if(movimentos==9)
            {
            printf("PARTIDA EMPATADA, A PARTIDA ATINGIU 9 JOGADAS!!!\n\n");
            empate++;
            getch();
            system("cls");
            break;
            }

        }
    movimentos=0;
    printf("DESEJA CONTINUAR?? < 0 > SIM  |  < 1 OU DEMAIS NUMEROS > NÃO\n");
    scanf("%d",&resposta);
    system("cls");
        if(resposta!=0)
        {
        printf("\n\nVITÓRIAS DE %s: %d\n\nVITÓRIAS DE %s: %d\n\n",strupr(nome1),jogador1,strupr(nome2),jogador2);
        getch();
        system("cls");
        printf("\n\nJOGO CRIADO POR YURI FUKUOKA DE OLIVEIRA\nUFCSPA(UNIVERSIDADE FEDERAL DE CIENCIAS DA SAÚDE DE PORTO ALEGRE)\nINFORMÁTICA BIOMÉDICA AD2019\n2016\n\n");
        system("pause");
        system("cls");
        }
    }while(resposta==0);
return(0);
}


