#include <stdio.h>
#include <conio.h>

/*5 - Escreva um algoritmo que leia 4 n�meros, 
ap�s a leitura multiplique todos e exibir o resultado. */

void main(){
	int num, num2, num3, num4, mult;
	
	printf("Informe um Numero: ");
	scanf("%d", &num);
	printf("Informe um Numero: ");
	scanf("%d", &num2);
	printf("Informe um Numero: ");
	scanf("%d", &num3);
	printf("Informe um Numero: ");
	scanf("%d", &num4);
	mult = num * num2 * num3 * num4;
	printf("Multi: %d", mult);



}
