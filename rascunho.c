#include<stdio.h>
int  perguntaNumeroJodagores () {
                              //AJUSTAR PARA APENAS 2 JOGADORES!!!!!!
	int num_jogadores = 0 ;
	bool bandeira;

	faça {
		printf ( " \ n \ n Computador - Quantas pessoas vão jogar? " );
		printf ( " \ n Você - " );
		scanf ( " % d% * c " , & num_jogadores);
		bandeira = (num_jogadores < 2 ) || (num_jogadores> 4 );
		if (bandeira)
			printf ( " Computador - Só é possível jogar de 2 a 4 pessoas! " );

	}
	enquanto (bandeira);

	printf ( " Computador - Beleza, vamos começar! \ n " );
	return num_jogadores;

}