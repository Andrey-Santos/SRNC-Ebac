#include <stdio.h> // Biblioteca de comunicação com o usuário
#include <stdlib.h> // Biblioteca de alocação de espaço em memória
#include <locale.h> // Biblioteca de alocação de texto por região

int main()
{
	int opcao = 0;//Definindo variavéis
	int laco = 1;
	

	for(laco=1; laco=1;)
	{

		system("cls");

		setlocale(LC_ALL, "Portuguese");//Definido Linguagem
	
		createMenu();//Criação do menu
		
		scanf("%d", &opcao);//Armazenando a escolha do usuário
		
		system("cls");
			
		switch(opcao)
		{
			case 1:
				printf("Você escolheu o registro de nomes!\n");
				system("pause");
			break;
			
			case 2:
				printf("Você escolheu o consultar os nomes!\n");
				system("pause");
			break;
						
			case 3:
				printf("Você escolheu deletar nomes!\n");
				system("pause");
			break;
						
			default:
				printf("Está opção não está disponível\n");
				system("pause");
			break;
		}
	}
}

void createMenu()
{
	printf("### Cartório da EBAC ### \n\n");
	printf("Escolha uma das opçãos do menu: \n\n");		
	printf("\t1 - Registrar nomes\n");
	printf("\t2 - Consultar nomes\n");
	printf("\t3 - Deletar nomes\n\n");
	
	printf("Opção:");
}

