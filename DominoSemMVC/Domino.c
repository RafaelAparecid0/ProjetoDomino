#include <stdio.h>
#include <stdlib.h>

//PROGRAMA SEM MVC

typedef struct Peca
{
    int esq;
    int dir;    
} tipo_Peca;

tipo_Peca domino [28];

int embaralhado (tamanho)
{
       for (int i = 0; i < tamanho; i++)
       {
        int embaralho = rand () % 28;
        tipo_Peca teste = domino[embaralho];
        domino[embaralho] = domino[i];
        domino[i] = teste;
       }
}

int imprimiPeca(tipo_Peca domino[])
{
    int i;
    int tamanho = (sizeof(domino)/sizeof(domino));
    for(i = 0; i< domino; i++)
    {
        printf("[%d|%d]", domino[i].esq, domino[i].dir); 
    }
    embaralhado (tamanho);
    return 0;
}

/**************************************************************/

int main (tipo_Peca domino[])
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
    imprimiPeca(domino);
    system("pause");
}