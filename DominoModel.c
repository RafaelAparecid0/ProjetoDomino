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

//INCLUINDO BIBLIOTECAS

#include<stdio.h>
#include<stdlib.h>

//DECLARAÇÃO DO TSTRUC PARA AS PEÇAS

typedef struct Peca
{
    int esq;
    int dir;    
} tipo_Peca;

tipo_Peca domino [28];

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
    tipo_Peca pecas;

    int numeroJogadores = num_jogadores();

    printf("\n Computador: Essas São as pedras da mesa\n ");

    if(pecas>-1)
        {
            printf("\n Computador: Essa é a proxima pedra a ser comprada: ");
            mostraTopoPilha(pecas);
            printf("\n");
        }
    else
            printf("\n Computador - Não existe mais pedras para compra \n");

    //imprime a mão dos jogadores
    for(int i=0 ; i < numeroJogadores ; i++)
        {
            printf("\n Computador - Essas são as peças do jogador %d \n ",i+1);
            Peca(pecas[i]);
        }
        printf("\n\n Computador - aperte enter para ver a próxima rodada");
        getchar();
        clear();
}

// Case 2: Embaralhar as peças do domino 

int embaralhado (tipo_Peca pecas[])
{
       for (int i = 0; i < pecas; i++)
       {
        int embaralho = rand () % 28;
        tipo_Peca teste = pecas[embaralho];
        pecas[embaralho] = pecas[i];
        pecas[i] = teste;
       }
}

void imprimiPeca(tipo_Peca pecas[])
{
    int tamanho = (sizeof(pecas)/sizeof(pecas));
    for(int i = 0; i<tamanho; i++)
    {
        printf("[%d|%d]", pecas[i].esq,pecas[i].dir); //Precisaria de ponteiro também
    }
    embaralhado (pecas);
    return 0;
}

// Case 1: Montar as peças do dominó com a numeração correta do jogo 

int montar(tipo_Peca pecas[])
{
    tipo_Peca nova;
    int pecas;
    int i,j;
    int count = 0;
    for(i=0;i<=6;i++)
    {
        for(j=i;j<=6;j++)
        {
            nova.esq = i;
            nova.dir= j;
            pecas[count]= nova;
            count++;
        }
    }
    imprimiPeca(pecas);
    return 0;
}


