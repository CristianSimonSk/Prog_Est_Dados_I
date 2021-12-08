#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
float I;

printf("\n*****DISTRIBUIDOR DE TROCO*****\n");
printf("\nInsira sua idade:\n");
scanf("%f",&I);
if (I==16||I==17) printf("\nVoce pode votar, mas nao eh obrigatorio!\n");
else 
   if (I>=18&&I<=69) printf("\nVoce deve votar, seu voto eh obrigatorio!\n");
   else
       if (I>=70) printf("\nSVoce pode votar, mas não eh obrigatorio!\n");
       else
           if (I<=15) printf("\nVoce nao pode votar!\n");  
system("pause");
}
