#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o de mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h> //biblioteca respons�vel por cuidar das strings

int registro() //fun��o respons�velpor cadatrar os usu�rios
{
	
	//in�cio das vari�veis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//final da cria��o de vari�veis
	
	printf("Digite o cpf a ser cadastrado: "); //mensagem a ser mostrado na tela
	scanf("%s", cpf); //armazenamento
	
	strcpy(arquivo, cpf); //respons�vel por copiar os valores das strings
	
	FILE *file; //cria o arquivo
	file = fopen(arquivo, "w"); //cria o arquivo
	fprintf(file, cpf); //salva o valor da vari�vel
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a"); //abre o arquivo onde a letra -a- faz alguma altera��o 
	fprintf(file, ","); //salva o valor
	fclose(file); //fecha o arquivo
	
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
	
	system("pause");
	
	
	
}

int consulta()
{
	setlocale(LC_ALL, "Portuguese");
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s", cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
	{
		printf("Arquivo n�o encontrado!\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	
	{
		printf("\nEssas s�o as informa��es do usu�rio: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system("pause");
}

int deletar()
{
	char cpf[40];
	
	printf("Digite o CPF do usu�rio a ser deletado: ");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
	{
		printf("Usu�rio n�o cadastrado no sistema!\n");
		system("pause");
	}
}


int main()
{
	int opcao=0; //Definindo as vari�veis
	int laco=1;
	

		
		
	
		for (laco=1;laco=1;)
		{
		system("cls");
	
			setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
			printf("### Cart�rio Gabriel ###\n\n"); //In�cio do menu	
			printf("Escolha a op��o desejada:\n\n");	
			printf("\t1 - Registrar nomes\n");
			printf("\t2 - Consultar nomes\n");
			printf("\t3 - Deletar nomes\n\n"); //Fim do menu
			printf("\t4 - Sair do sistema\n\n");
			printf("op��o: ");
	
			scanf("%d", &opcao); //Armazenando a escolha do usu�rio
	
			system("cls"); //respons�vel por limpar a tela
		
			switch(opcao)
			{
				case 1:
				registro(); //chamada de fun��es
				break;
				
				case 2:
				consulta();
				break;
				
				case 3:
				deletar();
				break;
				
				case 4:
				printf("Obrigado por utilizar o sistema ");
				return 0;
				break;
			
				
				
				default:
				printf("op��o inv�lida!\n");
				system("pause");
				break;
				
			
				
			}
	
	
		}
	
	
	
}

		
		

