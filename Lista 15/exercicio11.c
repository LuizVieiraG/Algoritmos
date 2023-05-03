#include <stdio.h>
#include <conio.h>

/*11 - Construa um algoritmo para calcular a média de dois valores 
inteiros positivos, previamente conhecidos.*/

void main(){
	int num, num2;
	float media;
	
	printf("Informe um numero inteiro: ");
	scanf("%d", &num);
	printf("Informe outro numero: ");
	scanf("%d", &num2);
	
	media = (num + num2) / 2;
	printf("Media: %f", media);	
	
	
	
}
