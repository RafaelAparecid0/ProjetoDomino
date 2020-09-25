/*
    ******************************************************************************** 
                            Camada da lógica da aplicação                            
    ********************************************************************************"
*/

//INCLUINDO BIBLIOTECAS

#include<stdio.h>
#include<stdlib.h>

//DECLARAÇÃO DO STRUCT PARA AS PEÇAS

typedef struct Peca
{
    int esq;
    int dir;
}Peca [28];

Peca pecas;

//Case 4: O sistema deverá permitir ao usuário mostrar todas as peças do dominó na tela 

//Declaração para struct de distribuição de peças

typedef struct tPedra 
{
    int pedraBuffer;
} tPedra;

/*
    Tentiva de determinar numeros de jogadores
*/
void determinarNumdeJogadores()
{
    int i,p, j, enderecoJogador, pontas[2], vencedor;
	tPedra pedraBuffer;
	bool esquerda, inicio, flag, denovo;
}

//Essa função seria de um programa externo, não sei como fazer

void distribuicaoDePecas()
{
    tPilha APE; //Pedras a serem compradas (APE) 
	tListaSimplesEncadeada Mesa;
	tListaSimplesEncadeada J[4];

    int numeroJogadores = perguntaNumeroJodagores();    
    //Distribui as pedras
		printf(" Computador - Vamos agora distribuir as peças...\n");
		while( tamListaSimples(J[0]) != MAX_MAO ){

			for(i=0 ; i<numeroJogadores ; i++){
				Desempilha(&APE,&pedraBuffer);
				insereOrdenadoListaSimples(&J[i], pedraBuffer);
			}
		}

		for(i=0 ; i<numeroJogadores; i++){
			printf("\n Computador - Essas são as peças do jogador %d \n ",i+1);
			imprimeListaSimples(J[i]);
		}

		// Pause para análise das pedras
		printf("\n\n Computador - Agora podemos jogar =)\n");
		printf(" Computador - Aperte enter para começar.");
		getchar(); //pause
		clear();
		printf(" Você - Vamos lá! \n");
		printf(" Computador - O primeiro a jogar vai ser o de maior pedra \n");

		//Faz a primeira jogada, procurando o maior peça
		enderecoJogador = buscaIniciante(J,numeroJogadores);
		printf("\n Computador - O primeiro jogador é o número %d\n", enderecoJogador+1);
		pedraBuffer = removeElementoPosListaSimples(&J[enderecoJogador], 0);
		if(!insereInicioListaSimples(&Mesa, pedraBuffer)) erro();
		printf(" Jogador %d - Coloco a pedra ", enderecoJogador+1);
		imprimePedra(pedraBuffer);
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
