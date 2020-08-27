#include<stdio.h>
#include<stdlib.h>
/*

void Declaracao_Pecas()
{
    /* DECLARAÇÃO DAS PEÇAS DO DOMINÓ (MATRIZ OU VETOR)
       int bla [1][8] = {1,2,3,4,5,6,7,8};
       for (int i = 0; i < 2; i++)
       {
           for (int j = 0; j < 8; j++)
           {
              printf ("\n[%d|%d] = ", bla [i][j]);
           }
        
       }
       
}
void main(){
    //Espaço reservado para construir o random!

    return 0;
}


void menuInicial()
{
    //COLOCAR O PRINTF APÓS ESSA COLUNA AÍ, PARA QUE POSSAMOS IMPRIMIR EM FORMATO DE DOMINÓ!
    
    int p1 = [0|0];
    int p2 = [1|1];
    int p3 = [2|2];
    int p4 = [3|3];
    int p5 = [4|4];
    int p6 = [5|5];
    int p7 = [6|6];
    int p8 = [0|6];
    int p9 = [1|6];
    int p10 = [2|6];
    int p11 = [3|6];
    int p12 = [4|6];
    int p13 = [5|6];
    int p14 = [3|4];
    int p15 = [5|1];
    int p16 = [4|2];
    int p17 = [5|3];
    int p18 = [5|4];
    int p19 = [2|5];
    int p20 = [1|2];
    int p21 = [4|1];
    int p22 = [1|0];
    int p23 = [2|0];
    int p24 = [3|0];
    int p25 = [4|0];
    int p26 = [5|0];
    int p27 = [3|2];
    int p28 = [1|3];
    
}*/
/*
struct 
{
    int vetor_pos_E[28];
    int vetor_pos_D[28];
	vetor_pos_E[0] = 0; // Sequencia de mapeamento dos indices das pedras do jogo de dominó
    vetor_pos_E[1] = 0;
    vetor_pos_E[2] = 0;
    vetor_pos_E[3] =0;
    vetor_pos_E[4] =0;
    vetor_pos_E[5] =0;
    vetor_pos_E[6] =0;
    vetor_pos_E[7] =1;
    vetor_pos_E[8] =1;
    vetor_pos_E[9] =1;
    vetor_pos_E[10]=1;
    vetor_pos_E[11]=1;
    vetor_pos_E[12]=1;
    vetor_pos_E[13]=2;
    vetor_pos_E[14]=2;
    vetor_pos_E[15]=2;
    vetor_pos_E[16]=2;
    vetor_pos_E[17]=2;
    vetor_pos_E[18]=3;
    vetor_pos_E[19]=3;
    vetor_pos_E[20]=3;
    vetor_pos_E[21]=3;
    vetor_pos_E[22]=4;
    vetor_pos_E[23]=4;
    vetor_pos_E[24]=4;
    vetor_pos_E[25]=5;
    vetor_pos_E[26]=5;
    vetor_pos_E[27]=6};
    vetor_pos_D[0]= {0;
    vetor_pos_D[1]=1;
    vetor_pos_D[2]=2;
    vetor_pos_D[3]=3;
    vetor_pos_D[4]=4;
    vetor_pos_D[5]=5;
    vetor_pos_D[6]=6;
    vetor_pos_D[7]=1;
    vetor_pos_D[8]=2;
    vetor_pos_D[9]=3;
    vetor_pos_D[10]=4;
    vetor_pos_D[11]=5;
    vetor_pos_D[12]=6;
    vetor_pos_D[13]=2;
    vetor_pos_D[14]=3;
    vetor_pos_D[15]=4;
    vetor_pos_D[16]=5;
    vetor_pos_D[17]=6;
    vetor_pos_D[18]=3;
    vetor_pos_D[19]=4;
    vetor_pos_D[20]=5;
    vetor_pos_D[21]=6;
    vetor_pos_D[22]=4;
    vetor_pos_D[23]=5;
    vetor_pos_D[24]=6;
    vetor_pos_D[25]=5;
    vetor_pos_D[26]=6;
    vetor_pos_D[27]=6};
    esquerda = vetor_pos_E[cont]; // Retorna o valor da pedra a esquerda de acordo com o indice do contador informado
	direita = vetor_pos_D[cont];
};
*/
void mostrar()
{
    printf("O sistema deverá permitir ao usuário mostrar todas as peças do dominó na tela (modo texto ou gráfico)");
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
    system("cls"); // Limpa a tela sempre que o usuário digitar uma opção
    int opcao2;
    fflush (stdin); //Função para limpar o buffer do teclado, normalmente utilizada em conjunto da biblioteca <stdio.h>
    printf("********************************************************************************");
    printf("\n                              Bem vindo ao início do jogo                            \n");
    printf("********************************************************************************");	       
    printf("\n");
    printf(" - OPÇÕES  -                                                                  ");
    printf("\n -   1     -                   Montar as peças                          - \n");
    printf("\n -   2     -                  Embaralhar as peças                       - \n");
    printf("\n -   3     -                  Organizar as peças                        - \n");
    printf("\n -   4     -                   Mostrar as peças                         - \n");
    printf("\n");
    printf("\n -   5     -                   Voltar ao menu principal                         - \n");
    printf("\n");
    printf("Digite a opção desejada: ");
    scanf ("%d", &opcao2);
    switch (opcao2)   //Caso a opção seja:
    {
        case 1: montar(); break;      // Chama a função para montar as peças 
        case 2: embaralhar(); break;  // Chama a função para embaralhar as peças
        case 3: organizar(); break;   // Chama a  função para organizar as peças
        case 4: mostrar(); break;     // Chama a função para mostrar todas as peças
        case 5: main(); break;        // Chama a função para voltar ao menu principal
    }
    
}


int main()
{
    int opcao;
    do 
    {
        system ("cls"); // Limpa a tela sempre que o usuário digitar uma opção
        
        // MENU

        printf("********************************************************************************");
        printf("\n                               JOGO DO DOMINÓ                               \n");
        printf("********************************************************************************");	
        printf("\n");
        printf(" - OPÇÕES  -                                                                  ");
        printf("\n -   1     -                   Começar o jogo                           - \n");
        printf("\n -   2     -                      Salvar                                - \n");
        printf("\n -   0     -                       Sair                                 - \n");
        printf("\n");
        printf("Digite a opção desejada: ");
        scanf ("%d", &opcao);
        switch (opcao) // Caso a opção seja: 
        {
            case 1: comecar_jogo(); break;  //1: Chama a função que vai começar o jogo
            //case 2: salvar_jogo (); break;  //2: Chama a função para salvar o jogo
        }
    } while (opcao != 0); //Vai rodar o menu inicial até o usuário digitar 0
    system ("pause");
    return 0;

}
