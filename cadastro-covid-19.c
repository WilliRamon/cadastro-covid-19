#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
struct atendimento
{
	char nome[50];
	char cpf[15];
	int fone[15];
	char endereco[100];
	char cep[10];
	char nascimento[10];
	int anoNasc;
	char email[50];
	char datadiag[10];
	char comorbidade[30];
};

int main(){
	setlocale(LC_ALL, "Portuguese");
	struct atendimento paciente;
	FILE *arquivo;
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
	
	arquivo = fopen("dados.txt", "a");
	if(arquivo == NULL)
	{
		printf("O arquivo n�o foi aberto. Ocorreu um erro!\n");
	}
	else
	{
	
	
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
	
	printf("Informe o CEP: \n");
	gets(paciente.cep);
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
	
	printf("Comorbidade: \n");
	gets(paciente.comorbidade);
	fflush(stdin);
	
	
	idade = 2021 - paciente.anoNasc;
	
	if((idade > 65) || (strcmp(paciente.comorbidade, " ")) == 1){
		printf("Paciente em grupo de risco\n");
		printf("Dados pessoais salvos em dadospaciente");
		
		fprintf(arquivo, "\n-------------------------------------------\n");
		fprintf(arquivo, "Nome: %s\n", paciente.nome);	
		fprintf(arquivo, "CEP: %s\n", paciente.cep);	
		fprintf(arquivo, "Comorbidade: %s\n", paciente.comorbidade);
		fprintf(arquivo, "-------------------------------------------\n");	
	}else{
		printf("Fora do grupo de risco\n");
	}
}
	fclose(arquivo);
}
