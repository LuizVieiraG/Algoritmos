#include <stdio.h>
#include <conio.h>

/*10 - Elabore um algoritmo que informe o maior número entre dois números 
conhecido pelo usuário.*/

void main(){
	int num1, num2;
	
	printf("Informe um numero: ");
	scanf("%d", &num1);
	printf("Informe outro numero: ");
	scanf("%d", &num2);
	
	if (num1 > num2){
		printf("%d eh maior", num1);
	}
	else{
		if(num1 == num2){
			printf("Nuemros Iguais");
		}	
		else{
			printf("%d eh maior", num2);
		}	
	}		
}
