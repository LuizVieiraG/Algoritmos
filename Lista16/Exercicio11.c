#include <stdio.h>
#include <conio.h>

/*11 - Elaborar um programa que possibilite calcular a �rea de cada c�modo de uma resid�ncia 
(por exemplo: sala, cozinha, banheiro, quartos, etc..). O programa deve solicitar a entrada 
do nome, da largura e do comprimento de um determinado c�modo, em seguida dever� apresentar 
a �rea do c�modo lido e tamb�m a mensagem solicitando ao usu�rio a confirma��o de continuar 
calculando novos c�modos. A opera��o deve ser repetida at� que o usu�rio responda "1 - N�O". 
�rea = largura * comprimento.*/

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


