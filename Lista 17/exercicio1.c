#include <stdio.h>
#include <conio.h>

void main(){
	float nota1, nota2, media;
	int resp = 1, qtde_aprove = 0;
	do{
		printf("Informe a 1. Nota: ");
		scanf("%f", &nota1);
		printf("Informe a 2. Nota: ");
		scanf("%f", &nota2);
		media = (nota1 + nota2) / 2;
		printf("Media: %0.2f", media);
		
		if(media >= 7){
			qtde_aprove++;
		}
		
		printf("\nDeseja Continuar? (1-sim,2-nao) ");
		scanf("%d", &resp);	
	}while(resp == 1);
	printf("Quantidade de Aprovados: %d", qtde_aprove);
}
