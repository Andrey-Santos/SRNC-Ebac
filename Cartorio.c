	#include <stdio.h> // Biblioteca de comunica��o com o usu�rio
#include <stdlib.h> // Biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> // Biblioteca de aloca��o de texto por regi�o
#include <string.h> // Biblioteca respons�vel pelas strings
#include <ctype.h> // Biblioteca respons�vel por manipular caracteres

void createMenu()
{
	printf("### Cart�rio da EBAC ### \n\n");
	printf("Escolha uma das op��os do menu: \n\n");		
	printf("\t1 - Registrar nomes\n");
	printf("\t2 - Consultar nomes\n");
	printf("\t3 - Deletar nomes\n\n");
	printf("\t4 - Sair do sistema\n");	
	printf("Op��o:");
}

int registro()// Fun��o respons�vel por cadastrar os usu�rios no sistema
{
	// Cria��o das v�riaveis
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	int opcao = 0;
	
	//Coletando informa��es do usu�rio
	printf("Digite o CPF do usu�rio a ser cadastrado: ");
	scanf("%s", cpf);// %s referese ao tipo de dado coletado como string
	
	strcpy(arquivo, cpf); //Respons�vel por copiar os valores das strings
	
	FILE *file; //Cria o arquivo
	file = fopen(arquivo, "w"); //Abre o arquivo
	fprintf(file, cpf); // Escreve no arquivo
	fclose(file);//Fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s", nome);
	
	file = fopen(arquivo, "a");
	fprintf(file, nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s", sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file, sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s", cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file, cargo);
	fclose(file);
	
	printf("Deseja cadastrar mais usu�rios? \n");
	printf("0 - N�o\n");
	printf("1 - Sim\n");
	
	scanf("%d", &opcao);//Armazenando a escolha do usu�rio
	
	//Verifica se deve adicionar mais usu�rios
	if(opcao == 1)
	{
		system("cls");//Respons�vel por limpar a tela
		registro();
	}	
	
	system("pause");
}

int consulta()
{
	// Cria��o das v�riaveis
	char cpf[40];
	char conteudo[200];
	char *conteudos;
	int opcao = 0;
	
	setlocale(LC_ALL, "Portuguese");//Definido Linguagem

	//Coletando informa��es do usu�rio
	printf("Digite o CPF do usu�rio a ser consultado: ");
	scanf("%s", cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL)//Valida��o que informa o usu�rio caso n�o exista o CPF informado
	{
		printf("N�o foi encontrado nenhum usu�rio com este CPF!\n");
	}
	
	//Apresenta��o dos dados encontrados
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as informa��es do usu�rio: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	printf("Deseja consultar outro usu�rio? \n");
	printf("0 - N�o\n");
	printf("1 - Sim\n");
	
	scanf("%d", &opcao);//Armazenando a escolha do usu�rio
	
	//Verifica se deve consultar mais usu�rios
	if(opcao == 1)
	{
		system("cls");//Respons�vel por limpar a tela
		consulta();
	}
	
	system("pause");
}

int deleta()
{
	// Cria��o das v�riaveis
	char cpf[40];
	int opcao = 0;
	
	setlocale(LC_ALL, "Portuguese");//Definido Linguagem

	//Coletando informa��es do usu�rio
	printf("Digite o CPF do usu�rio a ser deletado: ");
	scanf("%s", cpf);
	
	
	FILE * file;
	file = fopen(cpf, "r");
	
	if(file == NULL)//Valida��o que informa o usu�rio caso n�o exista o CPF informado 
	{
		printf("N�o foi encontrado nenhum usu�rio com este CPF!\n");
	}
	else
	{
		remove(cpf);	
		printf("Usu�rio deletado com sucesso\n");
	}
	
	printf("Deseja deletar mais usu�rios? \n");
	printf("0 - N�o\n");
	printf("1 - Sim\n");
	
	scanf("%d", &opcao);//Armazenando a escolha do usu�rio
	
	//Verifica se deve deletar mais usu�rios
	if(opcao == 1)
	{
		system("cls");//Respons�vel por limpar a tela
		deleta();
	}
	
	system("pause");
}

int main()
{
	int opcao = 0;//Definindo variav�is
	int laco = 1;

	for(laco=1; laco=1;)
	{

		system("cls");//Respons�vel por limpar a tela

		setlocale(LC_ALL, "Portuguese");//Definido Linguagem
	
		createMenu();//Cria��o do menu
		
		scanf("%d", &opcao);//Armazenando a escolha do usu�rio
		
		system("cls");
			
		switch(opcao)// Chamada de processos de acordo com op��o selecionada
		{
			case 1:
				registro();
			break;
			
			case 2:
				consulta();
			break;
						
			case 3:
				deleta();
			break;
			
			case 4:
				printf("Obrigado por utilizar o sistema!\n");
				return 0;
			break;
						
						
			default:
				printf("Est� op��o n�o est� dispon�vel\n");
				system("pause");
			break;
		}
	}
}
