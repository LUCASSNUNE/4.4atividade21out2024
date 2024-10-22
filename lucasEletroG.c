#include <stdio.h>
#include <math.h>

int main() {

    int numero1;
    int numero2;
    int soma1;
    int soma2;
    

    //PEDINDO

    printf("INFORME OS DOIS PRIMEIROS NUMEROS DO ANO DE SEU NASCIMENTO: ");
    scanf("%d", &numero1);

    printf("INFORME OS DOIS SEGUNDOS NUMEROS DO ANO DE SEU NASCIMENTO: ");
    scanf("%d", &numero2);

    //somas

    soma1 = numero1 + numero2;

    soma2 = soma1 % 5;

    //desisões

    if(soma2==1){
        printf("sonhador");
    }

    if(soma2==2){
        printf("paquerador");
    }
    if(soma2==3){
        printf("atraente");
    }
    if(soma2==4){
        printf("iresistivel");
    }
}














    