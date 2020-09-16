#include<stdio.h>
int main(){
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

//Função principal

int main()
{
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
            //case 2: salvar_jogo (); break; 2: Chama a função para salvar o jogo
        }
    } while (opcao != 0); // Enquanto opção for diferente de 0
    system ("pause");
    return 0;

}
