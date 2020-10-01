#include<stdio.h>
#include<stdbool.h>
#include <stdlib.h>
/*
int  perguntaNumeroJodagores () {
                              //AJUSTAR PARA APENAS 2 JOGADORES!!!!!!
	int num_jogadores = 0 ;
	bool bandeira;

	do {
		printf ( " \n Computador - Quantas pessoas vão jogar? " );
		printf ( " \n Você - " );
		scanf ( " % d " , & num_jogadores);
		bandeira = (num_jogadores < 2 ) || (num_jogadores> 4 );
		if (bandeira)
			printf (" Computador - Só é possível jogar de 2 a 4 pessoas! " );

	}
	while (bandeira);

	printf ( " Computador - Beleza, vamos começar!  n " );
	return num_jogadores;

}

//Imprime a mesa
			printf("\n Computador: Essas São as pedras da mesa\n ");
			imprimeListaSimples(Mesa);

			//Imprime a proxima peça do APE
			if(APE.topo>-1){
				printf("\n Computador: Essa é a proxima pedra a ser comprada: ");
				mostraTopoPilha(APE);
				printf("\n");
			}
			else
				printf("\n Computador - Não há mais pedras para compra \n");

			//Imprime a mão dos jogadores
			for(i=0 ; i<numeroJogadores ; i++){
				printf("\n Computador - Essas são as peças do jogador %d \n ",i+1);
				imprimeListaSimples(J[i]);
			}
			printf("\n\n Computador - aperte enter para ver a próxima rodada");
			getchar();
			clear();
*/

int main()
{

  int magic;  /* nï¿½mero mï¿½gico */
  int guess;  /* palpite do usuï¿½rio */
  srand (time(NULL)); //Inicia o gerador de nï¿½meros aleatï¿½rios da biblioteca <time.h>
  magic = rand() % 9;  //Gera nï¿½meros aleatï¿½rios de 0 a 9
  printf("%d\n", magic);
  do
	{
	  printf("Adivinhe o nÃºmero mÃ¡gico: ");
	  scanf("%d", &guess);

	  if(guess == magic)
	  {
	  	printf("*************************************************************");
		printf("\n                        PARABÃ©NS!                        \n");
		printf("\n                      Vocï¿½ Acertou!                      \n");
		printf("*************************************************************");
	  }

	}while (guess != magic);



}



void embaralharPecas (tipo_Domino pecas[]) 
{
	int vetSize = 28;
	for (int i = 0; i < vetSize; i++)
	{
	int r = rand() % 28;

	tipo_Domino temp = pecas[r];

	pecas[r] = pecas[i];
	pecas[i] = temp;
	}

	return;
}



//DISTRIBUIÇÃO DE PEÇAS:

// distribuir dominós
void  start ( struct game * game, int n) {
	struct domino * tile;
	struct player * player;
	int i;

	se (n < 1 || n> 7 ) n = 7 ;

	if (jogo-> jogadores == NULL ) return ;

	jogador = jogo-> jogadores ;
	enquanto (jogador! = NULL ) {
		jogador-> peças = jogo-> peças ;
		jogador-> peças -> anterior = NULL ;
		i = 1 ;
		while (game-> tiles ! = NULL && i <n) {
			jogo-> peças = jogo-> peças -> próximo ;
			i ++;
		}

		telha = jogo-> peças ;
		jogo-> peças = jogo-> peças -> próximo ;
		telha-> próximo = NULL ;
		jogo-> peças -> anterior = NULL ;
		jogador = jogador-> anterior ;
	}
};

//FAZER A PRIMEIRA JOGADA...


//Variáveis
	int i,p, j, enderecoJogador, pontas[2], vencedor;
	tPedra pedraBuffer;
	bool esquerda, inicio, flag, denovo;
//Faz a primeira jogada, procurando o maior peça
		enderecoJogador = buscaIniciante(J,numeroJogadores);
		printf("\n Computador - O primeiro jogador é o número %d\n", enderecoJogador+1);
		pedraBuffer = removeElementoPosListaSimples(&J[enderecoJogador], 0);
		if(!insereInicioListaSimples(&Mesa, pedraBuffer)) erro();
		printf(" Jogador %d - Coloco a pedra ", enderecoJogador+1);
		imprimePedra(pedraBuffer);









