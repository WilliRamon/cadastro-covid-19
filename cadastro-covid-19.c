#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
struct atendimento
{
	char nome[50];
	char cpf[15];
	int fone;
	char endereco[100];
	char nascimento[10];
	char email[50];
	char datadiag[10];
	char comorbidade[30];
	int idade;
};

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char login[10] = "admin", log[10];
	int senha = 123, sen;
	
	do{
		printf("Digite seu login: \n");
		scanf("%s", &log);
		fflush(stdin);
		system("cls");
		
		if(strcmp(log, login) == 1){
			printf("Login incorreto. Digite novamente.\n");
		}
	}while(strcmp(log, login) == 1);
	
	do{
		printf("Digite a senha: \n");
		scanf("%d", &sen);
		fflush(stdin);
		system("cls");
		
		if(sen != senha){
			printf("Senha incorreta. Digite novamente");
		}
	}while(sen != senha);
	
	printf("Acesso liberado");
	
	
	return (0);
}
