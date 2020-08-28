#include<stdio.h>
#include<stdlib.h>

//DECLARAÇÃO DO STRUCT COM AS PEÇAS
struct pecas
{
    int vetor_pos_E[28];
    int vetor_pos_D[28];
} pecas_domino;


void mostrar()
{
    int esquerda, direita, cont;
    //printf("O sistema deverá permitir ao usuário mostrar todas as peças do dominó na tela (modo texto ou gráfico)");
    1
    // Sequencia de mapeamento dos indices das pedras do jogo de dominó
    
    // Sequencia de mapeamento dos indices das pedras do jogo de dominó.
    
    pecas_domino.vetor_pos_E[0] = 0; 
    pecas_domino.vetor_pos_E[1] =0;
    pecas_domino.vetor_pos_E[2] =0;
    pecas_domino.vetor_pos_E[3] =0;
    pecas_domino.vetor_pos_E[4] =0;
    pecas_domino.vetor_pos_E[5] =0;
    pecas_domino.vetor_pos_E[6] =0;
    pecas_domino.vetor_pos_E[7] =1;
    pecas_domino.vetor_pos_E[8] =1;
    pecas_domino.vetor_pos_E[9] =1;
    pecas_domino.vetor_pos_E[10]=1;
    pecas_domino.vetor_pos_E[11]=1;
    pecas_domino.vetor_pos_E[12]=1;
    pecas_domino.vetor_pos_E[13]=2;
    pecas_domino.vetor_pos_E[14]=2;
    pecas_domino.vetor_pos_E[15]=2;
    pecas_domino.vetor_pos_E[16]=2;
    pecas_domino.vetor_pos_E[17]=2;
    pecas_domino.vetor_pos_E[18]=3;
    pecas_domino.vetor_pos_E[19]=3;
    pecas_domino.vetor_pos_E[20]=3;
    pecas_domino.vetor_pos_E[21]=3;
    pecas_domino.vetor_pos_E[22]=4;
    pecas_domino.vetor_pos_E[23]=4;
    pecas_domino.vetor_pos_E[24]=4;
    pecas_domino.vetor_pos_E[25]=5;
    pecas_domino.vetor_pos_E[26]=5;
    pecas_domino.vetor_pos_E[27]=6;
    pecas_domino.vetor_pos_D[0]=0;
    pecas_domino.vetor_pos_D[1]=1;
    pecas_domino.vetor_pos_D[2]=2;
    pecas_domino.vetor_pos_D[3]=3;
    pecas_domino.vetor_pos_D[4]=4;
    pecas_domino.vetor_pos_D[5]=5;
    pecas_domino.vetor_pos_D[6]=6;
    pecas_domino.vetor_pos_D[7]=1;
    pecas_domino.vetor_pos_D[8]=2;
    pecas_domino.vetor_pos_D[9]=3;
    pecas_domino.vetor_pos_D[10]=4;
    pecas_domino.vetor_pos_D[11]=5;
    pecas_domino.vetor_pos_D[12]=6;
    pecas_domino.vetor_pos_D[13]=2;
    pecas_domino.vetor_pos_D[14]=3;
    pecas_domino.vetor_pos_D[15]=4;
    pecas_domino.vetor_pos_D[16]=5;
    pecas_domino.vetor_pos_D[17]=6;
    pecas_domino.vetor_pos_D[18]=3;
    pecas_domino.vetor_pos_D[19]=4;
    pecas_domino.vetor_pos_D[20]=5;
    pecas_domino.vetor_pos_D[21]=6;
    pecas_domino.vetor_pos_D[22]=4;
    pecas_domino.vetor_pos_D[23]=5;
    pecas_domino.vetor_pos_D[24]=6;
    pecas_domino.vetor_pos_D[25]=5;
    pecas_domino.vetor_pos_D[26]=6;
    pecas_domino.vetor_pos_D[27]=6;
    //esquerda = pecas_domino.vetor_pos_E[cont]; // Retorna o valor da pedra a esquerda de acordo com o indice do contador informado
	//direita = pecas_domino.vetor_pos_D[cont]; // Retorna o valor da pedra a direita de acordo com o indice do contador informado

    //TENTANDO IMPRIMIR AS PEÇAS DO DOMINÓ

    //printf ("[%d]", pecas_domino.vetor_pos_D[27]); //DEU CERTO IMPRESSÃO

    for (int i = 0; pecas_domino.vetor_pos_E[i] < 28; i++)
    {
        for (int j = 0; pecas_domino.vetor_pos_D[j] < 28; j++)
        {
            printf("[%d|%d]", pecas_domino.vetor_pos_D[i], pecas_domino.vetor_pos_D[j]);  
        } 
    }
    system("pause");
}

void organizar()

{
    printf("O sistema deverá permitir ao usuário organizar as peças (sequencia correta) para jogar novamente");
    system("pause");
}

void embaralhar()
{
    printf("O sistema deve permitir ao usuário embaralhar as peças do domino");

    system("pause");
}


void montar()
{
    printf("O sistema deverá montar as peças do dominó com a numeração correta do jogo "); 
    system("pause");
}

//Menu para começar o jogo

void comecar_jogo()

{ 
    int opcao2;
    do // Faça
    {
        system("cls"); // Limpa a tela sempre que o usuário digitar uma opção
        fflush (stdin); //Função para limpar o buffer do teclado, normalmente utilizada em conjunto da biblioteca <stdio.h>
        printf("********************************************************************************");
        printf("\n                           Bem vindo ao início do jogo                      \n");
        printf("********************************************************************************");	       
        printf("\n - OPÇÕES  -                                                                ");
        printf("\n -   1     -                   Montar as peças                          - \n");
        printf("\n -   2     -                  Embaralhar as peças                       - \n");
        printf("\n -   3     -                  Organizar as peças                        - \n");
        printf("\n -   4     -                   Mostrar as peças                         - \n");
        printf("\n");
        printf("\n -   5     -                Voltar ao menu principal                    - \n");
        printf("\n");
        printf("Digite a opção desejada: ");
        scanf ("%d", &opcao2);
        switch (opcao2)   //Caso a opção seja:
        {
            case 1: montar(); break;      // Chama a função para montar as peças 
            case 2: embaralhar(); break;  // Chama a função para embaralhar as peças
            case 3: organizar(); break;   // Chama a  função para organizar as peças
            case 4: mostrar(); break;     // Chama a função para mostrar todas as peças
        }
    }while (opcao2 !=5 ); // Enquanto opção for diferente de 5
}

int main()
{
    int opcao;
    do 
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
	    printf("	|             |   -    2    -     Salvar                 |               |\n");
	    printf("	|             |   -    0    -      Sair                  |               |\n");
	    printf("	|             |                                          |               |\n");
	    printf("	|             |__________________________________________|               |\n");
	    printf("	|                                                                        |\n");
	    printf("	|________________________________________________________________________|\n");
        printf("Digite a opção desejada: ");
        scanf ("%d", &opcao);
        switch (opcao) // Caso a opção seja: 
        {
            case 1: comecar_jogo(); break;  //1: Chama a função que vai começar o jogo
            //case 2: salvar_jogo (); break; //2: Chama a função para salvar o jogo
        }
    } while (opcao != 0); //Vai rodar o menu inicial até o usuário digitar 0
    system ("pause");
    return 0;

}
