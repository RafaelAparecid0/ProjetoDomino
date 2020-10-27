/*
    ******************************************************************************** 
                    Arthur Rocha, Fabricio De Biasi e Rafael Aparecido
                                        25/09/2020                             
    ********************************************************************************"
*/


/*
    ******************************************************************************** 
                            Camada da lógica da aplicação                            
    ********************************************************************************"
*/

/*
//INCLUINDO BIBLIOTECAS

#include<stdio.h>
#include<stdlib.h>
#define N 28

//DECLARAÇÃO DO TSTRUC PARA AS PEÇAS

typedef struct Peca
{
    int esq;
    int dir;    
} tipo_Peca;


//Declaração para struct de distribuição de peças

typedef struct tPedra 
{
    int pedraBuffer;
} tPedra;

void Distribuicao()
{

} 

void Mesa ()
{
    printf("\n");

    //Criação de uma mesa:
    tipo_Peca domino[28];

    int numeroJogadores = num_jogadores();

    printf("\n Computador: Essas São as pedras da mesa\n ");

    if(domino>-1)
        {
            printf("\n Computador: Essa é a proxima pedra a ser comprada: ");
            mostraTopoPilha(domino);
            printf("\n");
        }
    else
            printf("\n Computador - Não existe mais pedras para compra \n");

    //imprime a mão dos jogadores
    for(int i=0 ; i < numeroJogadores ; i++)
        {
            printf("\n Computador - Essas são as peças do jogador %d \n ",i+1);
            Peca(domino[i]);
        }
        printf("\n\n Computador - aperte enter para ver a próxima rodada");
        getchar();
        clear();
}

// Case 2: Embaralhar as peças do domino 

int embaralharDomino (tipo_Peca domino[])
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
    int i;
    for(i = 0; i< N; i++)
    {
        printf("[%d|%d]", domino[i].esq,domino[i].dir); //Precisaria de ponteiro também
    }
    return 0;
}

// Case 1: Montar as peças do dominó com a numeração correta do jogo 

int montarDomino()
{
    tipo_Peca domino [28];
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


