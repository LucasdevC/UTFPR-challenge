/**
 * @file   challenge2.c
 * @author your name (https://github.com/LucasdevC/UTFPR-challenge)
 * @brief 
 * @version 0.1
 * @date 2025-09-07
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <stdlib.h>
int main(){
    int opcao;
    int numero;
    int par_impar;
    int idade;
    printf("Digite um numero abaixo para as opcoes:\n");
    printf("1-Verificar par/impar\n");
    printf("2-Verificar maior/menor de idade\n");
    scanf("%i",&opcao);
    switch(opcao){
        case 1:
            printf("Digite um numero:");
            scanf("%i",&numero);
            par_impar = numero % 2;
            if(par_impar == 0){
                printf("Par\n");
            }
            else{
                printf("Impar\n");
            }
            break;
        case 2:
            printf("Digite sua idade:");
            scanf("%i",&idade);
            if(idade < 12){
                printf("Voce e crianca\n");
            }
            else{
                if(idade < 18){
                    printf("Voce e adolecente\n");
                }
                else{
                    printf("Voce e adulto\n");
                }
            }
        
        break;
        default:
            printf("Invalido\n");
    }

    return 0;
}