#include <stdio.h> // Biblioteca de comunica��o com o usu�rio
#include <stdlib.h> // Biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> // Biblioteca de aloca��o de texto por regi�o

int main()
{
	int opcao = 0;//Definindo variav�is
	
	setlocale(LC_ALL, "Portuguese");//Definido Linguagem
	
	createMenu();//Cria��o do menu
	
	scanf("%d", &opcao);//Armazenando a escolha do usu�rio
	
	system("cls");
		
		
	if(opcao==1)//Inicio da sele��o
	{
		printf("Voc� escolheu o registro de nomes!");
	}
		
	if(opcao==2)
	{
		printf("Voc� escolheu o consultar os nomes!");
	}
		
	if(opcao==3)
	{
		printf("Voc� escolheu deletar nomes!");
	}	
	
	if(opcao>=4 || opcao<=0)
	{
		printf("Est� op��o n�o est� dispon�vel");
	}//Fim sele��o
}

void createMenu()
{
	printf("### Cart�rio da EBAC ### \n\n");
	printf("Escolha uma das op��os do menu: \n\n");		
	printf("\t1 - Registrar nomes\n");
	printf("\t2 - Consultar nomes\n");
	printf("\t3 - Deletar nomes\n\n");
	
	printf("Op��o:");
}

