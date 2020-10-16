/*********************************************
 *                BIBLIOTECA
 ********************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define N 28

/*********************************************
 *                 STRUCT DE PEÇAS
 ********************************************/

typedef struct Peca
{
    int esq;
    int dir;
} tipo_Peca;

tipo_Peca domino        [28];
tipo_Peca maoJogador1   [28];
tipo_Peca maoJogador2   [28];
tipo_Peca maoComputador [28];
tipo_Peca monte         [28];
tipo_Peca mesa          [28];
tipo_Peca Peca_Inicial  [28];

/*********************************************
 *                 JOGADAS
 ********************************************/

int JogadorVsComputador (tipo_Peca domino[], tipo_Peca jogador1[],tipo_Peca Computador[], tipo_Peca monte[])
{
    printf("");
}


/*********************************************
 *            MESA P/ 2 JOGADORES
 ********************************************/

int Mesa_2Jogadores (tipo_Peca domino[], tipo_Peca jogador1[],tipo_Peca jogador2[], tipo_Peca monte[]) 
{
    printf("********************************************************************************");
    printf("\n                                 DOMINEIRO'S                                \n");
    printf("********************************************************************************");	   
    int h,i,j,k;
    printf("\n\n==========\n");
    for (h=27; h<28; h++)
    {
        Peca_Inicial[i] = domino[h];
        printf("Mesa: [%d|%d]", Peca_Inicial[i]);
    }
    printf("\n==========\n");
    printf("\n\n===============\n");
    printf("Mão Jogador 1:\n");
    printf("===============\n");
    for(i=0; i<7; i++) 
    {
        jogador1[i] = domino[i];   //Mão do Jogador 1
        printf("%d.[%d|%d]. ", i, jogador1[i]);
    }
    printf("\n\n===============");
    printf("\nMão Jogador 2:\n");
    printf("===============\n");
    for(j=7; j<14; j++) 
    {
        jogador2[i] = domino[j];   //Mão do Jogador 2
        printf("%d.[%d|%d].", i, jogador2[i]);
    } 
    //printf("\n\nMonte:\n");
    for(k=14; k<27; k++) 
    {
        monte[i] = domino[k];   //Monte
        //printf("[%d|%d]", monte[i]);
    }
    printf("\n\n");
}

int inicio_2Jogadores (num_jogadores)

{
    //printf("\nDominio Montado\n");
    montarDomino(domino);
    //imprimirDomino(domino);
    //printf("\nDominio Embaralhado\n");
    embaralharDomino(domino);
    //imprimirDomino(domino);
    Mesa_2Jogadores(domino, maoJogador1, maoJogador2, monte);
    
    system("pause");
}


/*********************************************
 *                 MESA P/ 1 JOGADOR
 ********************************************/

int Mesa_1Jogador (tipo_Peca domino[], tipo_Peca jogador1[],tipo_Peca Computador[], tipo_Peca monte[]) 
{
    fflush (stdin); //Função para limpar o buffer do teclado, normalmente utilizada em conjunto da biblioteca <stdio.h>
    int h,i,j,k;
    printf("********************************************************************************");
    printf("\n                                 DOMINEIRO'S                                \n");
    printf("********************************************************************************");	 
    printf("\n\n===========\n");
    for(h=27; h<28; h++); 
    {
        Peca_Inicial[i] = domino[h];   //Monte
        printf("Mesa: [%d|%d]", Peca_Inicial[i]);
    }          
    printf("\n===========\n");
    printf("\n");
    printf("==============\n");
    printf("Mão Jogador 1:\n");
    printf("===============\n");
    for(i=0; i<7; i++) 
    {
        jogador1[i] = domino[i];   //Mão do Jogador 1
        printf("%d.[%d|%d]. ", i, jogador1[i]);
    }
    /*
        MÃO DO COMPUTADOR
    */
    for(j=7; j<14; j++) 
    {
        Computador[i] = domino[j];   
        //printf("[%d|%d].", Computador[i]);
    } 
    //printf("\n\nMonte:\n");
    for(k=14; k<27; k++) 
    {
        monte[i] = domino[k];   //Monte
    //  printf("[%d|%d]", monte[i]);
    }
    
    printf("\n\n");
}

int inicio_1Jogador (num_jogadores)

{
    //printf("\nDominio Montado\n");
    montarDomino(domino);
    //imprimirDomino(domino);
    //printf("\nDominio Embaralhado\n");
    embaralharDomino(domino);
    //imprimirDomino(domino);
    Mesa_1Jogador(domino, maoJogador1, maoComputador, monte);
    JogadorVsComputador(domino, maoJogador1, maoComputador, monte);
    system("pause");
}

/*********************************************
 *           IMPRESSÃO DAS PEÇAS
 ********************************************/

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

/*********************************************
 *         EMBARALHAMENTO DAS PEÇAS
 ********************************************/

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

/*********************************************
 *           MONTAGEM DAS PEÇAS
 ********************************************/

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

/*********************************************
 *      MENU PARA QUANTIDADE DE JOGADORES            
 ********************************************/

int definir_jogadores ()
{
	int num_jogadores;
	bool flag;

	do 
    {
        system("cls"); // Limpa a tela sempre que o usuário digitar uma opção
        fflush (stdin); //Função para limpar o buffer do teclado, normalmente utilizada em conjunto da biblioteca <stdio.h>
        printf("********************************************************************************");
        printf("\n                           Bem vindo ao início do jogo                      \n");
        printf("********************************************************************************");	   
        printf("\n - OPÇÕES  -                                                                  ");
        printf("\n -   1     -                   Jogador vs Computador                      - \n");
        printf("\n -   2     -                 Jogador 1 vs Jogador 2                       - \n");
        printf("\n");
        printf("\n -   0     -                Voltar ao menu principal                      - \n");
        printf("********************************************************************************");
        printf("\n");
        printf ("\n Digite a quantidade de jogadores:");
		scanf ( "%d", &num_jogadores);
		flag = (num_jogadores < 1 ) || (num_jogadores > 2 );
		if (flag)
        {
            system("cls");
			printf ("Só é possível jogar de 1 a 2 pessoas! " );
        }
        switch (num_jogadores) // Caso a opção seja: 
            {
                case 1: system ("cls"); // Limpa a tela sempre que o usuário digitar uma opção
                        inicio_1Jogador (num_jogadores); break;   //1: Chama a função que vai começar o jogo

                case 2: system ("cls"); // Limpa a tela sempre que o usuário digitar uma opção
                        inicio_2Jogadores (num_jogadores); break; //2: Chama a função para salvar o jogo
                case 0: system ("cls"); // Limpa a tela sempre que o usuário digitar uma opção
                        main (); break;
            }
	} while (num_jogadores != 0);
	while (flag);
    return 0;
}

/*********************************************
 *               MENU PRINCIPAL
 ********************************************/

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
                case 1: definir_jogadores (); break;
            }
        } while (opcao != 0); // Enquanto opção for diferente de 0
    system ("pause");
    return 0;
}




