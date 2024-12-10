#include <stdio.h>
#include <stdlib.h>


int main(){
    

float altura, peso, indice;

printf("diga a altura");
scanf("%f",&altura);
printf(" diga o peso");
scanf("%f",&peso);


indice=peso/(altura*altura);



if(indice<18.5){
                printf("%f abaixo do peso",indice);
}

if(indice>=18.5 && indice<25){      
                printf("%f esta na faixa ideal",indice);
}

if(indice>=25 && indice<30){
                        
                         printf("%f esta com sobre peso",indice);
                         
}



if(indice>=30){
                        printf("%f esta com obesidade",indice);
}

system("pouse");
return 0;
}
