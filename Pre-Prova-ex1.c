#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
setlocale(LC_ALL, "Portuguese");
float valor[10], Maior =0, Menor = 999, soma_produto = 0;
char produto[10][20];
int i, k=0, quant, NomeMaior, NomeMenor;

printf("Quantos produtos sera add.: ");
scanf("%i", &quant);

for(i=0; i < quant; i++){
        printf("\nNome do produto:");
        //fgets(produto[i],20,stdin);
        //fflush(stdin);
        scanf("%s", produto[i]);
        printf("Valor de venda:");
        scanf("%f", &valor[i]);



    if(valor[i] > Maior){
        Maior = valor[i];
        NomeMaior= produto[i];
    }
    if(valor[i] < Menor){
        Menor = valor[i];
        NomeMenor= produto[i];
    }
    if(valor[i]<=100){
        k++;
    }
 soma_produto += valor[i];

}

printf("O produto mais caro é o %s", NomeMaior);
printf("\nO produto mais barato é o %s", NomeMenor);
printf("\nA quantidade deproduto inferior a 100: %i", k);
printf("\nA soma dos produtos são: %.2f", soma_produto);

return 0;
}
