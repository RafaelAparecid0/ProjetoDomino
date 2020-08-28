//INCLUINDO BIBLIOTECAS
#include<stdio.h>
#include<stdlib.h>

//DECLARAÇÃO DO STRUCT COM AS PEÇAS

typedef struct Peca
{
    int esquerda;
    int direita;
}Peca [28] pecas;




pecas[] gerarOrdem(){ //este trecho do código tem por objetivo gerar a ordem correta das peças do 
                      //dominó para posteriormente embaralharmos.
   peca nova;
   Peca[28] baralho;
   int i,j;
   int cont = 0;
   for(i = 0;i < 6; i++){
      for(j = 0; j < 6; j++){
         nova.esq = i;
         nova.dir = j;
         baralho[cont] = nova;
}

Peca[] gerarEmbaralhado(Peca[] origin){ //este trecho do código(junto com o "for" abaixo) nos permite embralharmos as peças do dominó.
     Peca[28] embaralhado;
     int[28] crivo;
     int i, j, index;
     for(i = 0; i < 28; i++){
        crivo[i] = 0;
}

for(j = 0; j<28; j++){ 
   index = geraAleatorio();
   while(crivo[index]== 1){
      index = geraAleatorio();

}

embaralhado[J] = origin[index];
crivo[index] = 1;
}
return embaralhado;




void imprimePeca(pecas[] baralho){ // aqui nós abrimos uma função para imprimir as peças do dominó já embaralhadas.
 char baralho;
 int i;
 int tamanho = (sizeof(baralho)/ sizeof(Peca));
 for(i = 0; i < tamanho; i++){
   printf("[%d][%d]", baralho[i].esq, baralho[i].dir);
}
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
