#include<stdio.h>

int main(){
    //Construa um algoritmo que, dado quatro valores, A, B, C e D, o algoritmo imprima o maior e o menor valor
    //quatro valores
    //mair para o menor

float a,b,c,d;

    printf("digite quatro valores");
    scanf("%f %f %f %f",&a,&b,&c,&d);
//essa parte inicia as variaveis sendo a abtribuido tanto maior ou menor valor
float maior=a;
float menor=a;
//{}são os blocos das operacoes
if(b>=maior){
    maior=b;
}else if(b<maior){
    menor=b;
}
if(c>=maior){
    menor=c;
}else if(c<maior){
    menor=c;
}
if(d>=maior){
    menor=d;
}else if(d<maior){
    menor=d;
}

printf("o maior valor e :%.2f\n",maior);
printf("o menor valor e ;%.2f\n",menor);
    


}