/**
 * @file utfpr.c
 * @author your name (https://github.com/LucasdevC?tab=repositories)
 * @brief 
 * @version 0.1
 * @date 2025-09-04
 * 
 * @copyright Copyright (c) 2025
 * 
 */
//ex:1
#include <stdio.h>
#include <stdlib.h>
int main(){
    float nota;
    scanf("%f",&nota);
    if(nota < 60.0){
        printf("Voce esta reprovado sua nota:%f\n",nota);
    }
    else{
        if(nota >= 60.0){
            printf("Voce passou de ano sua nota:%f",nota);
        }
    }
    return 0;
}
//ex:2
#include <stdio.h>
#include <stdlib.h>
int main(){
    int a;
    int b;
    scanf("%i",&a);
    b = a % 2;
    if(a == 0){
        printf("Numero par\n");
    }
    else{
        printf("Numero impar\n");
    }

    return 0;
}
//ex:3
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float a;
    float b;
    float c;
    float delta;
    float calculo;
    float raiz;
    float soma;
    float menos;
    printf("Digite um numero:");
    scanf("%f",&a);
    printf("Digite um numero:");
    scanf("%f",&b);
    printf("Digite um numero:");
    scanf("%f",&c);
    delta = pow(b,2) - 4 * a * c;
    if(delta < 0){
        printf("nao tem raiz\n");
    }
    else{
        if(delta == 0){
            raiz = -b / 2 * a;
            printf("Valor de 0 tem raiz:%.2f\n",raiz);
        }
        else{
            calculo = (-b + sqrt(delta)) / (2 * a);
            printf("Valor de X1:%.2f\n",calculo);
            calculo = (-b -sqrt(delta)) / 2 * a;
            printf("Valor de X2:%.2f\n",calculo);
        }
    }
    return 0;
}
//ex:4
#include <stdio.h>
#include <stdlib.h>
int main(){
    float salario;
    printf("Digite sei salario$:");
    scanf("%f",&salario);
    float aliquota;
    printf("Digite sua aliquota:");
    scanf("%f",&aliquota);
    float parcela;
    printf("Digite sua parcela:");
    scanf("%f",&parcela);
    float calculo = salario * aliquota - parcela;
    printf("Valor:%.2f",calculo);

    return 0;
}
