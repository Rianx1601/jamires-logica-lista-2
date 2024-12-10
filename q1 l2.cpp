#include <stdio.h>
#include <stdlib.h>


int main(){
    
int tipo_do_pagamento;
float valor_da_compra;

printf("diga o valor da compra");
scanf("%f",&valor_da_compra);
printf(" 1 - à vista\n 2 - parcelado em 2x\n 3 - parcelado em 3x");
scanf("%d",&tipo_do_pagamento);

if(tipo_do_pagamento==1){
                        valor_da_compra=valor_da_compra-(valor_da_compra*0.1);
                         printf("com o desconto de 10 porcento fica %f",valor_da_compra);
}

if(tipo_do_pagamento==2){
                         valor_da_compra=valor_da_compra/2;      
                         printf("fica em duas vezes de %f",valor_da_compra);
}

if(tipo_do_pagamento==3){
                         valor_da_compra=valor_da_compra+(valor_da_compra*0.05);
                         valor_da_compra=valor_da_compra/3;
                         printf("fica em tres vezues de %f",valor_da_compra);
                         
}



if(tipo_do_pagamento!=1 && tipo_do_pagamento!=2 && tipo_do_pagamento!=3){
                        printf("forma de pagamento nao encontrada");
}

system("pouse");
return 0;
}
