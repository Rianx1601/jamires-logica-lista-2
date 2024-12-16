

#include <stdio.h>

int main()
{

float n1, n2, n3, m;

scanf("%f\n%f\n%f",&n1,&n2,&n3);

m=(n1+n2+n3)/3;

if(m>=7){
    printf("aprovada");
}

if(m>=5 && m<7){
    printf("recuperacao");
}

if(m<5){
    printf("reprovado");
}

    return 0;
}
