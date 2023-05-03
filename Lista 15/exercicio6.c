#include <stdio.h>
#include <conio.h>

/* 6 - Escreva um algoritmo que leia 3 números e 
ao final subtraia o primeiro do segundo e divida o resultado pelo terceiro. */

void main(){
	int num, num2, num3;
	float result;
	
	printf("Informe um Numero: ");
	scanf("%d", &num);
	printf("Informe um Numero: ");
	scanf("%d", &num2);
	printf("Informe um Numero: ");
	scanf("%d", &num3);
	
	result = (float)(num2 - num) / (float)num3;
	printf("Resultado: %0.2f", result);
	
}
