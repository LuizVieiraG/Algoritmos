#include <stdio.h>
#include <conio.h>

void main(){
	char nome[100], sobrenome[100];
	
	
	printf("Informe seu nome: ");
	scanf("%s", nome);
	printf("Informe seu sobrenome: ");
	scanf("%s", sobrenome);
	printf("Nome Completo: %s %s", nome, sobrenome);			
}
