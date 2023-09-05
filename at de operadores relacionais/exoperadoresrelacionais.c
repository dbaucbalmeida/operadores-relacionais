#include<stdio.h>
#include<math.h>

main(){
    /*Escreva um algoritmo que leia um número e imprima a raiz quadrada do número caso ele seja 
    positivo ou igual a zero e o quadrado do número caso ele seja negativo.*/
    //ler o numero e imprimir a raiz quadrada

    float numero;
         printf("digite o numero");
         scanf("%f",&numero);
    
    if(numero>=0){
        float raiz_quadrada=sqrt(numero);
        printf("a raiz quadrada do numero e : %.2f\n",raiz_quadrada);
 }else{
        float quadrado= numero*numero;
        printf("o quadrado do numero e : %.2f\n",quadrado);

 }
return 0;

}