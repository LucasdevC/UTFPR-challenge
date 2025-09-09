/**
 * @file cc.c
 * @author Lucas Mathias Belini (https://github.com/LucasdevC?tab=repositories)
 * @brief 
 * @version 0.1
 * @date 2025-09-08
 * 
 * @copyright Copyright (c) 2025
 * 
 */
//Ex1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float m = 500.00;
    float i = 1.0 / 100.0;
    printf("Taxa:%.2f\n",i);
    int t = 3;
    float conta = m * pow(1+i,t);
    printf("Valor:%.2f\n",conta);
    return 0;
}
//Ex2
#include <stdio.h>
#include <stdlib.h>
int main(){
    float a = 40.0;
    float b = -1.0;
    float _1a =  a + b++;
    float _2a = a - b;
    float _3a = a * b;
    float _4a = a / b;

    _1a = a + b;
    _2a = a - b;
    _3a = a * b;
    _4a = a / b;
    printf("Valor:%.2f\n",_1a);
    printf("Valor:%.2f\n",_2a);
    printf("Valor:%.2f\n",_3a);
    printf("Valor:%.2f\n",_4a);
    return 0;
}
//Ex3
#include <stdio.h>
#include <stdlib.h>
#define altura 173
int main(){
    float peso = 72.7;
    float calculo = peso*altura;
    printf("Peso ideal:%.2f",calculo);
    
    return 0;
  } 


    
