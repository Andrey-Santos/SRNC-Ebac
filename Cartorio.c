	#include <stdio.h> // Biblioteca de comunicação com o usuário
#include <stdlib.h> // Biblioteca de alocação de espaço em memória
#include <locale.h> // Biblioteca de alocação de texto por região
#include <string.h> // Biblioteca responsável pelas strings
#include <ctype.h> // Biblioteca responsável por manipular caracteres

void createMenu()
{
	printf("### Cartório da EBAC ### \n\n");
	printf("Escolha uma das opçãos do menu: \n\n");		
	printf("\t1 - Registrar nomes\n");
	printf("\t2 - Consultar nomes\n");
	printf("\t3 - Deletar nomes\n\n");
	printf("\t4 - Sair do sistema\n");	
	printf("Opção:");
}

int registro()// Função responsável por cadastrar os usuários no sistema
{
	// Criação das váriaveis
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	int opcao = 0;
	
	//Coletando informações do usuário
	printf("Digite o CPF do usuário a ser cadastrado: ");
	scanf("%s", cpf);// %s referese ao tipo de dado coletado como string
	
	strcpy(arquivo, cpf); //Responsável por copiar os valores das strings
	
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
	
	printf("Deseja cadastrar mais usuários? \n");
	printf("0 - Não\n");
	printf("1 - Sim\n");
	
	scanf("%d", &opcao);//Armazenando a escolha do usuário
	
	//Verifica se deve adicionar mais usuários
	if(opcao == 1)
	{
		system("cls");//Responsável por limpar a tela
		registro();
	}	
	
	system("pause");
}

int consulta()
{
	// Criação das váriaveis
	char cpf[40];
	char conteudo[200];
	char *conteudos;
	int opcao = 0;
	
	setlocale(LC_ALL, "Portuguese");//Definido Linguagem

	//Coletando informações do usuário
	printf("Digite o CPF do usuário a ser consultado: ");
	scanf("%s", cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL)//Validação que informa o usuário caso não exista o CPF informado
	{
		printf("Não foi encontrado nenhum usuário com este CPF!\n");
	}
	
	//Apresentação dos dados encontrados
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas são as informações do usuário: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	printf("Deseja consultar outro usuário? \n");
	printf("0 - Não\n");
	printf("1 - Sim\n");
	
	scanf("%d", &opcao);//Armazenando a escolha do usuário
	
	//Verifica se deve consultar mais usuários
	if(opcao == 1)
	{
		system("cls");//Responsável por limpar a tela
		consulta();
	}
	
	system("pause");
}

int deleta()
{
	// Criação das váriaveis
	char cpf[40];
	int opcao = 0;
	
	setlocale(LC_ALL, "Portuguese");//Definido Linguagem

	//Coletando informações do usuário
	printf("Digite o CPF do usuário a ser deletado: ");
	scanf("%s", cpf);
	
	
	FILE * file;
	file = fopen(cpf, "r");
	
	if(file == NULL)//Validação que informa o usuário caso não exista o CPF informado 
	{
		printf("Não foi encontrado nenhum usuário com este CPF!\n");
	}
	else
	{
		remove(cpf);	
		printf("Usuário deletado com sucesso\n");
	}
	
	printf("Deseja deletar mais usuários? \n");
	printf("0 - Não\n");
	printf("1 - Sim\n");
	
	scanf("%d", &opcao);//Armazenando a escolha do usuário
	
	//Verifica se deve deletar mais usuários
	if(opcao == 1)
	{
		system("cls");//Responsável por limpar a tela
		deleta();
	}
	
	system("pause");
}

int main()
{
	int opcao = 0;//Definindo variavéis
	int laco = 1;

	for(laco=1; laco=1;)
	{

		system("cls");//Responsável por limpar a tela

		setlocale(LC_ALL, "Portuguese");//Definido Linguagem
	
		createMenu();//Criação do menu
		
		scanf("%d", &opcao);//Armazenando a escolha do usuário
		
		system("cls");
			
		switch(opcao)// Chamada de processos de acordo com opção selecionada
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
				printf("Está opção não está disponível\n");
				system("pause");
			break;
		}
	}
}
