#include <stdio.h>
#include <stdlib.h>

void main(){
    float a;
    float b;
    float c;

    printf("\n digite a primeira nota:" );
    scanf("%f",&a);
    printf("\n digite a segunda nota:" );
    scanf("%f", &b);
    printf("\n digite a terceira nota" );
    scanf("%f", &c);
    float d = (a+b+c)/3;

    if (d >= 7){
        printf("parabens voce foi aprovado");
    }
    else {
            printf("foi reprovado");
    }



}


