#include <stdio.h>
#include <conio.h>

/* 7 - Escreva um algoritmo que leia o ano de nascimento de uma pessoa e 
o ano atual, ao final exiba a idade que essa pessoa tem. */

void main(){
	float num1, num2, sub;
	
	printf("Informe seu ano de Nascimento: ");
	scanf("%f", &num1);
	printf("Ano Atual: ");
	scanf("%f", &num2);
	
	sub = num2 - num1;
	printf("sua Idade: %f", sub);
	
}
