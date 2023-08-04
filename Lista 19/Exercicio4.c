#include <stdio.h>
#include <conio.h>

/*4.	Um cinema possui capacidade de 6 lugares e está sempre com ocupação total. Certo dia, cada 
espectador respondeu a um questionário, no qual constava, sua idade e sua opinião em relação ao filme, 
sendo
o	Nota 		Significado
o	1 		Ótimo
o	2 		Bom
o	3 		Regular
o	4 		Ruim
o	5 		Péssimo
Elabore um algoritmo que, lendo estes dados, calcule e imprima:
- A quantidade de respostas ótimo;
- A diferença percentual entre respostas bom e regular;
- A média de idade das pessoas que responderam ruim;
- A percentagem de respostas péssimo e a maior idade que utilizou esta opção;
- A diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim.*/

void main(){
	int capacidadeCinema = 6,cont = 1, idade, opiniao, maiorIdadeOtimo = 0, maiorIdadeRuim = 0;
    int quantidadeOtimo = 0, quantidadeBom = 0, quantidadeRegular = 0, quantidadeRuim = 0, quantidadePessimo = 0;
    int somaIdadeRuim = 0, quantidadeRuimTotal = 0, maiorIdadePessimo = 0;
    float diferencaPercentual, mediaIdadeRuim, diferencaIdade;

    printf("\n<<Questionario sobre o filme>>");

    while (cont <= capacidadeCinema) {
        printf("\nEspectador %d", cont);

        printf("\nIdade: ");
        scanf("%d", &idade);

        printf("\nOpiniao sobre o filme: ");
        printf("\n1 - Otimo");
        printf("\n2 - Bom");
        printf("\n3 - Regular");
        printf("\n4 - Ruim");
        printf("\n5 - Pessimo");
        printf("\nOpcao: ");
        scanf("%d", &opiniao);

        switch (opiniao) {
            case 1:
                quantidadeOtimo++;
                if (idade > maiorIdadeOtimo) {
                    maiorIdadeOtimo = idade;
                }
                break;
            case 2:
                quantidadeBom++;
                break;
            case 3:
                quantidadeRegular++;
                break;
            case 4:
                quantidadeRuim++;
                somaIdadeRuim += idade;
                quantidadeRuimTotal++;
                if (idade > maiorIdadeRuim) {
                    maiorIdadeRuim = idade;
                }
                break;
            case 5:
                quantidadePessimo++;
                if (idade > maiorIdadePessimo) {
                    maiorIdadePessimo = idade;
                }
                break;
            default:
                printf("\nOpcao invalida!");
                continue;
        }

        cont++;
    }

    printf("<<Resultados>>");
    printf("\nQuantidade de respostas otimo: %d", quantidadeOtimo);

    diferencaPercentual = (float) (quantidadeBom - quantidadeRegular) / quantidadeRegular * 100;
    printf("\nDiferenca percentual entre respostas bom e regular: %.2f%%", diferencaPercentual);

    if (quantidadeRuimTotal > 0) {
        mediaIdadeRuim = (float) somaIdadeRuim / quantidadeRuimTotal;
        printf("\nMedia de idade das pessoas que responderam ruim: %.2f", mediaIdadeRuim);
    } else {
        printf("\nNenhuma pessoa respondeu ruim.");
    }
    float percentagemPessimo = (float) quantidadePessimo / capacidadeCinema * 100;
    printf("\nPercentagem de respostas pessimo: %.2f%%", percentagemPessimo);
    printf("\nMaior idade que utilizou a opcao pessimo: %d", maiorIdadePessimo);
    diferencaIdade = maiorIdadeOtimo - maiorIdadeRuim;
    printf("\nDiferença de idade entre a maior idade que respondeu otimo e a maior idade que respondeu ruim: %.2f", diferencaIdade);
}

