#include<stdio.h>
#include<stdbool.h>
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
