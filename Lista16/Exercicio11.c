#include <stdio.h>
#include <conio.h>

/*11 - Elaborar um programa que possibilite calcular a área de cada cômodo de uma residência 
(por exemplo: sala, cozinha, banheiro, quartos, etc..). O programa deve solicitar a entrada 
do nome, da largura e do comprimento de um determinado cômodo, em seguida deverá apresentar 
a área do cômodo lido e também a mensagem solicitando ao usuário a confirmação de continuar 
calculando novos cômodos. A operação deve ser repetida até que o usuário responda "1 - NÃO". 
Área = largura * comprimento.*/

void main(){
	char nome[50];
	float largura, comprimento, area;
	int resp;
	
	while(resp != 1){
		printf("Nome do Comodo: ");
		scanf("%s", nome);
		printf("Largura do Comodo: ");
		scanf("%f", &largura);
		printf("Comprimento do Comodo: ");
		scanf("%f", &comprimento);
		area = largura * comprimento;
		printf("\nArea do Comodo: %0.2f", area);	
		
		printf("\nDeseja Continuar? (1- Nao,2- Sim) ");
		scanf("%d", &resp);
	}
	
}


