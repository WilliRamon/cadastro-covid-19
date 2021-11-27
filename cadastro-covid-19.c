#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
struct atendimento
{
	char nome[50];
	char cpf[15];
	int fone[15];
	char endereco[100];
	char nascimento[10];
	int anoNasc;
	char email[50];
	char datadiag[10];
	char comorbidade[30];
};

int main(){
	setlocale(LC_ALL, "Portuguese");
	struct atendimento paciente;
	int idade;
	
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
	
	printf("Cadastro Inicial do Paciente\n");
	
	printf("\nNome: \n");
	gets(paciente.nome);
	fflush(stdin);
	
	printf("CPF: \n");
	gets(paciente.cpf);
	fflush(stdin);
	
	printf("Telefone: \n");
	scanf("%d", &paciente.fone);
	fflush(stdin);
	
	printf("Endere�o: \n");
	gets(paciente.endereco);
	fflush(stdin);
	
	printf("Informe dia e m�s de nascimento: \n");
	gets(paciente.nascimento);
	fflush(stdin);
	
	printf("Informe o ano de nascimento: \n");
	scanf("%d", &paciente.anoNasc);
	fflush(stdin);
	
	printf("E-mail: \n");
	gets(paciente.email);
	fflush(stdin);	
	
	printf("Dia do diagnostico: \n");
	gets(paciente.datadiag);
	fflush(stdin);
	
	gets(paciente.comorbidade);
	fflush(stdin);
	
	
	idade = 2021 - paciente.anoNasc;
	
	if((idade > 65) || strcmp(paciente.comorbidade, " ") == 1){
		printf("Grupo de risco\n");
	}else{
		printf("Fora do grupo de risco\n");
	}
	

	
	printf("Nome: %s\n", paciente.nome);
	printf("CPF: %s\n", paciente.cpf);
	printf("Telefone: %d\n", paciente.fone);
	printf("Endere�o: %s\n", paciente.endereco);
	printf("Data de Nascimento: %s\n", paciente.nascimento);
	printf("Ano de nascimento: %d\n", paciente.anoNasc);
	printf("E-mail: %s\n", paciente.email);
	printf("Dia do Diagnostico: %s\n", paciente.datadiag);
	printf("Comorbidade: %s\n", paciente.comorbidade);

	
	
	return (0);
}
