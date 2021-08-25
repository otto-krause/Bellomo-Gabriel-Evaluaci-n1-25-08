#include <stdio.h>
#include <stdlib.h>

int main(){
int calculo=0,a=0,b=0,c=0,I=0;

printf("Ingrese el tipo de calculo que quiere hacer: \n1=Multiplicacion\n2=Division\n");
scanf("%d", &calculo);
    if (calculo=1){
    printf("Ingrese los numeros que quiere multiplicar: \n");
    scanf("%d",&a);
    scanf("%d",&b);
    for(I=1;I<=b;I++){}
    c=c+a;
    }
    printf("El resultado de la multiplicacion es: \n%d", c);
    if (calculo=2){
    printf("");
    }
    else{
    printf("error");
    }
}
