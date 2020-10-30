/*********************************************
 *                BIBLIOTECA
 ********************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
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
 *          JOGADAS P/ 2 JOGADORES
 ********************************************/

int Jogador1VsJogador2 (tipo_Peca domino[], tipo_Peca jogador1[],tipo_Peca jogador2[], tipo_Peca monte[])
{
    fflush (stdin);
    char op;
    int num1_peca, i, k;
    size_t nvetor = 0;
    /*do
    {*/
        printf("J - Jogar\n");
        printf("C - Comprar\n");
        printf("P - Passar\n");
        printf("S - Salvar (Interromper o jogo)\n");
        printf("Escolha uma opção: ");
        scanf("%c", &op);
        op = toupper (op);
        switch (op)
        {
            case 'J':
                printf("\n");
                printf("Escolha uma peça para jogar:"); 
                scanf("%d", &num1_peca);
                for (i = 1; i < 8; i++)     //Loop da mão do Jogador
                {
                    jogador1[i] = domino[i];     
                    for(k=27; k<28; k++);   //Loop da peça inicial
                    {
                        Peca_Inicial[i] = domino[k];   
                        if (num1_peca == i)
                        {
                            printf("\n\n===========\n");
                            printf("Mesa: [%d|%d][%d|%d]", Peca_Inicial[i],jogador1[i]);
                            printf("\n\n===========\n");
                        }  
                    }//Opções para tirar: Substituir peça por -1/-1 (peça não existe)
                } 
                printf("\n\n===============\n");
                printf("Mão Jogador 1:\n");
                printf("===============\n");
                for (i = 1; i < 8 ; i++)
                {
                    jogador1[i]= domino[i];
                    if (num1_peca == i )
                    {
                        jogador1[i] = jogador1[i-1];
                    }
                }
                
                for (i = 1; i < 7; i++)
                {
                    printf("[%d|%d]", jogador1[i]);
                }
                break;

            case 'C':
                printf("Entrei\n"); break;
            case 'P':
                printf("Entrei\n"); break;
            case 'S':
                printf("Entrei\n"); break;
            default: printf("Por favor, digite uma das opções acima\n");
        }
    //}while ();
    system("pause");
}

/*********************************************
 *            MESA P/ 2 JOGADORES
 ********************************************/

int Mesa_2Jogadores (tipo_Peca domino[], tipo_Peca jogador1[],tipo_Peca jogador2[], tipo_Peca monte[]) 
{
    printf("********************************************************************************");
    printf("\n                                 DOMINEIRO'S                                \n");
    printf("********************************************************************************");	   
    int h,i,j,k, t=1;
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
    for(i=1; i<8; i++) 
    {
        jogador1[i] = domino[i];   //Mão do Jogador 1
        printf("%d.[%d|%d]. ", i, jogador1[i]);
    }
    printf("\n\n===============");
    printf("\nMão Jogador 2:\n");
    printf("===============\n");
    
    for(j=8; j<15; j++) 
    {
        jogador2[i] = domino[j];   //Mão do Jogador 2
        printf("%d.[%d|%d]. ",t++, jogador2[i]);
    }
    
    //printf("\n\nMonte:\n");
    for(k=15; k<27; k++) 
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
    Jogador1VsJogador2(domino, maoJogador1, maoJogador2, monte);
    system("pause");
}

/*********************************************
 *              JOGADAS P/ 1 JOGADOR
 ********************************************/

int Jogador1VsComputador (tipo_Peca domino[], tipo_Peca jogador1[],tipo_Peca Computador[], tipo_Peca monte[])
{
    fflush (stdin);
    char op;
    int num_peca, i, k;
    printf("J - Jogar");
    printf("\nC - Comprar");
    printf("\nP - Passar");
    printf("\nS - Sair (interromper o jogo)");
    printf("\nEscolha uma opção: ");
    scanf("%c", &op);
    op = toupper(op);

    switch (op)
    {
        case 'J':
            printf("\n");
            printf("Escolha uma peça para jogar:"); 
            scanf("%d", &num_peca);
            for (i = 1; i < 8; i++)
            {
                jogador1[i] = domino[i];      //Mão do Jogador 1
                for(k=27; k<28; k++); 
                {
                    Peca_Inicial[i] = domino[k];   //Monte
                    if (num_peca == i)
                    {
                        printf("\n\n===========\n");
                        printf("Mesa: [%d|%d][%d|%d]\n\n", Peca_Inicial[i],jogador1[i]);
                        printf("\n\n===========\n");
                    }  
                }//Opções para tirar: Substituir peça por -1/-1 (peça não existe)
            } break;
        case 'C':
            printf("Entrei\n"); break;
        case 'P':
            printf("Entrei\n"); break;
        case 'S':
            printf("Entrei\n"); break;
        default: printf("Por favor, digite uma das opções acima\n");
    }
}

/*********************************************
 *                 MESA P/ 1 JOGADOR
 ********************************************/

int Mesa_1Jogador (tipo_Peca domino[], tipo_Peca jogador1[],tipo_Peca Computador[], tipo_Peca monte[]) 
{
    //fflush (stdin); //Função para limpar o buffer do teclado, normalmente utilizada em conjunto da biblioteca <stdio.h>
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
    for(i=1; i<8; i++) 
    {
        jogador1[i] = domino[i];   //Mão do Jogador 1
        printf("%d.[%d|%d]. ", i, jogador1[i]);
    }
    /*
        MÃO DO COMPUTADOR
    */
    for(j=8; j<15; j++) 
    {
        Computador[i] = domino[j];   
        //printf("[%d|%d].", Computador[i]);
    } 
    //printf("\n\nMonte:\n");
    for(k=15; k<27; k++) 
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
    Jogador1VsComputador (domino, maoJogador1, maoComputador, monte);
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




