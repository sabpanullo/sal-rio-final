#include<stdio.h>
int main(){
    float salario, salariofinal ;
    int pontos;
    printf("Entre com seu salario:");
    scanf("%f", &salario);
    printf("Entre com a pontuação:");
    scanf("%i", &pontos);
    if(pontos>=1000){
        salariofinal = salario + 500;
        }
        else if(pontos>= 500 && pontos <1000){
            salariofinal = salario + 300;
        }
        else if(pontos >=100 && pontos < 500){
            salariofinal = salario + 100;
        }
        else if (pontos >= 1 && pontos < 100){
            salariofinal = salario + 25;
        }
        else{
            salariofinal = salario;
        }
        printf("Sua pontuação foi %i e seu Salario Final %f", pontos, salariofinal);    
        }