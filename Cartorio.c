#include <stdio.h> // Biblioteca de comunica��o com o usu�rio
#include <stdlib.h> // Biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> // Biblioteca de aloca��o de texto por regi�o

int main()
{
	setlocale(LC_ALL, "Portuguese");
	printf("### Cart�rio da EBAC ### \n\n");
	printf("Escolha uma das op��os do menu: \n\n");		
	printf("\t1 - Registrar nomes\n");
	printf("\t2 - Consultar nomes\n");
	printf("\t3 - Deletar nomes\n\n");
	
	printf("Esse Software foi desenvolvido e testado por Andrey C. Dos Santos, baseado no curso TI do Zero Ao Pro da EBAC\n");
}

