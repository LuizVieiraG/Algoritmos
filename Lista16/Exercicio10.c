#include <stdio.h>
#include <conio.h>

/*10 - Escreva um programa que leia o primeiro nome e a altura das mo�as inscritas em um 
concurso de beleza. Para cada leitura dever� ser realizado uma pergunta para o usu�rio para 
parar ou continuar (1 -continuar, 2 - parar). Ao final o programa dever� exibir: a altura da 
mo�a mais alta e o n�mero de mo�as no concurso. Considere que todas as mo�as 
possuem altura diferente.*/

void main(){
	char nome[100];
	float altura, alta = 0;
	int resp = 1, qtde = 0;
	printf("<<Participantes>>\n");
	while(resp == 1){
		printf("\nInforme o Nome: ");
		scanf("%s", nome);
		printf("Informe a Altura: ");
		scanf("%f", &altura);
		qtde++;
		if(altura > alta){
			alta = altura;
		}
		printf("Deseja Continuar? (1- Sim;2- Nao) ");
		scanf("%d", &resp);		
	}
	printf("\n\nResultados:\n\n");
	printf("\nQuantidade de Participantes: %d", qtde);
	printf("\nA maior altura: %0.2f", alta);
}
