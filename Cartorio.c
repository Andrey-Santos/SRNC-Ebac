#include <stdio.h> // Biblioteca de comunicação com o usuário
#include <stdlib.h> // Biblioteca de alocação de espaço em memória
#include <locale.h> // Biblioteca de alocação de texto por região

int main()
{
	int opcao = 0;//Definindo variavéis
	
	setlocale(LC_ALL, "Portuguese");//Definido Linguagem
	
	createMenu();//Criação do menu
	
	scanf("%d", &opcao);//Armazenando a escolha do usuário
	
	system("cls");
		
		
	if(opcao==1)//Inicio da seleção
	{
		printf("Você escolheu o registro de nomes!");
	}
		
	if(opcao==2)
	{
		printf("Você escolheu o consultar os nomes!");
	}
		
	if(opcao==3)
	{
		printf("Você escolheu deletar nomes!");
	}	
	
	if(opcao>=4 || opcao<=0)
	{
		printf("Está opção não está disponível");
	}//Fim seleção
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

