#include <stdio.h>
#include <stdlib.h>
#define N 28
//PROGRAMA SEM MVC

typedef struct Peca
{
    int esq;
    int dir;
} tipo_Peca;

   tipo_Peca domino [28];

    tipo_Peca maoJogador1[28];
    tipo_Peca maoJogador2[28];
    tipo_Peca monte[28];
    tipo_Peca mesa[28];

void embaralharDomino (tipo_Peca domino[])
{
       for (int i = 0; i < N; i++)
       {
        int embaralho = rand () % N;
        tipo_Peca teste = domino[embaralho];
        domino[embaralho] = domino[i];
        domino[i] = teste;
       }
}

int imprimirDomino(tipo_Peca domino[])
{
    system("cls");
    int i;
    for(i = 0; i< N; i++)
    {
        printf("[%d|%d]", domino[i].esq, domino[i].dir);
    }
    return 0;
}

/**************************************************************/

void montarDomino(tipo_Peca domino[]) 
{

  tipo_Peca nova;

  int i,j;
  int count = 0;

  for(i=0;i<=6;i++)
      {
        for(j=i;j<=6;j++)
        {
            nova.esq = i;
            nova.dir= j;
            domino[count]= nova;
            count++;
        }
    }
}

int Mesa (tipo_Peca domino[], tipo_Peca jogador1[],tipo_Peca jogador2[], tipo_Peca monte[]) 
{
    int i,j,k;
    printf("\nMão Jogador 1:\n");
    for(i=0; i<7; i++) 
    {
        jogador1[i] = domino[i];   //Mão do Jogador 1
        printf("[%d|%d]", jogador1[i]);
    }
    printf("\nMão Jogador 2:\n");
    for(j=7; j<14; j++) 
    {
        jogador2[i] = domino[j];   //Mão do Jogador 2
        printf("[%d|%d]", jogador2[i]);
    } 
    printf("\nMonte:\n");
    for(k=14; k<28; k++) 
    {
        monte[i] = domino[k];   //Monte
        printf("[%d|%d]", monte[i]);
    }
    printf("\n");
}


int inicio ()

{
    //printf("\nDominio Montado\n");
    montarDomino(domino);
    //imprimirDomino(domino);
    //printf("\nDominio Embaralhado\n");
    embaralharDomino(domino);
    //imprimirDomino(domino);

    Mesa(domino, maoJogador1, maoJogador2, monte);

    system("pause");
}


int main()
{
    system("cls");
    int opcao;
        do // Faça
        {
            fflush (stdin); //Função para limpar o buffer do teclado, normalmente utilizada em conjunto da biblioteca <stdio.h>
            system ("cls"); // Limpa a tela sempre que o usuário digitar uma opção
            
            // MENU
            
            printf("	 ________________________________________________________________________ \n");
            printf("	|____________________________  DOMINEIROS _______________________________|\n");
            printf("	|                               ________                                 |\n");
            printf("	|                              |  MENU  |                                |\n");
            printf("	|                               --------                                 |\n");
            printf("	|              __________________________________________                |\n");
            printf("	|             |                                          |               |\n");
            printf("	|             |   - OPÇÕES  -                            |               |\n");
            printf("	|             |   -    1    -      Jogo                  |               |\n");
            printf("	|             |   -    0    -      Sair                  |               |\n");
            printf("	|             |__________________________________________|               |\n");
            printf("	|                                                                        |\n");
            printf("	|________________________________________________________________________|\n");
            printf("Digite a opção desejada: ");
            scanf ("%d", &opcao);
            switch (opcao) // Caso a opção seja: 
            {
                case 1: inicio(); break;
            }
        } while (opcao != 0); // Enquanto opção for diferente de 0
     system ("pause");
     return 0;

}




