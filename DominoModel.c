/*
    ******************************************************************************** 
                            Camada da lógica da aplicação                            
    ********************************************************************************"
*/

//INCLUINDO BIBLIOTECAS

#include<stdio.h>
#include<stdlib.h>

//DECLARAÇÃO DO STRUCT PARA AS PEÇAS

typedef struct Peca{
    int esq;
    int dir;
}Peca [28];

Peca pecas;

//Case 4: O sistema deverá permitir ao usuário mostrar todas as peças do dominó na tela 

void mostrar()
{
    printf("O sistema deverá permitir ao usuário mostrar todas as peças do dominó na tela ");
    system("pause");
}

//Case 3: Organizar as peças

void organizar()
{
    printf(" O sistema deverá permitir ao usuário organizar as peças (sequencia correta) para jogar novamente.");
    system("pause");
}


// Case 2: Embaralhar as peças do domino 

Peca[] embaralhar(Peca[] origin)
{
    Peca[28] embaralhado;
    int[28] crivo;
    int i,j, index;
    for(i=0;i<28;i++)
    {
        crivo[i]=0;
    }
    for(j=0;j<28;j++)
    {
        index=geraAleatorio();
        while(crivo[index]==1)
        {
            index=geraAleatorio();
        }
        embaralhado[j]=origin[index];
        crivo[index]=1;
    }
    return embaralhado;
}
void imprimiPeca(Peca[] baralho)
{
    int i;
    int tamanho = (sizeof(baralho)/sizeof(Peca));
    for(i = 0; i<tamanho;i++)
    {
        printf("[%d|%d]", baralho[i].esq,baralho[i].dir);
    }
}

// Case 1: Montar as peças do dominó com a numeração correta do jogo 

Peca[] montar()
{
    peca nova;
    Peca[28] baralho;
    int i,j;
    int count = 0;
    for(i=0;i<=6;i++)
    {
        for(j=i;j<=6;j++)
        {
            nova.esq = i;
            nova.dir= j;
            baralho[count]= nova;
        }
    }
    return baralho;
}

}
