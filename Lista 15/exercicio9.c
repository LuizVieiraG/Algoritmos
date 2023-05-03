#include <stdio.h>
#include <conio.h>

/*9 - Faça um algoritmo que leia a idade de uma pessoa e ao final exiba quando meses, 
dias, horas, minutos e segundo que essa pessoa já viveu.*/

void main(){
	int idade, mes, dias, horas, min, seg;

	printf("Informe sua idade: ");
	scanf("%d", &idade);
	mes = idade * 12;
	dias = mes * 30;
	horas = dias * 24;
	min = horas * 60;
	seg = min * 60;
	
	printf("Meses: %0.0d \n", mes);
	printf("dias: %0.0d \n", dias);
	printf("horas: %0.0d \n", horas);
	printf("minutos: %0.0d \n", min);
	printf("segundos: %0.0d \n", seg);
	
	
}
