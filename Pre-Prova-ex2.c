#include <stdio.h>
#include <string.h>

int main (){
char nome[10][20], sexo, dept[10][20];
int idade, quant, i=0, q=0;
float salario, menor=999999, porcent=0, id=0;
char depto_menor[1][20];


printf("Quantidade de funcionario: ");
scanf("%i", &quant);
printf("---------------------------------\n");
for(i=1;i<=quant;i++){
    fflush(stdin);
    printf("Nome: ");
    fgets(nome[i],20,stdin);
    printf("Sexo (F/M): ");
    sexo=toupper(sexo);
    scanf("%c", &sexo);
    printf("Salario: ");
    scanf("%f", &salario);
    printf("Idade: ");
    scanf("%i", &idade);
    fflush(stdin);
    printf("Departamento: ");
    fgets(dept[i],20,stdin);
    printf("------------------------------\n");


    if(sexo!='F' && salario>=1500){
        q++;
    }
    if(idade>=30 && salario<=2000){
        id++;
    }
    if(salario<menor){
        menor=salario;
        strcpy(depto_menor, dept[i]);
    }

}
printf("Quant. homens c/ sal > 1500: %i",q);
porcent = (id*100)/quant;
printf("\nProcentual: %.2f", porcent);
printf("\nO depto < salario: %s", depto_menor);




return 0;
}
