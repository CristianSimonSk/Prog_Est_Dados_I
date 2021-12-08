#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
float I;

printf("\n*****DISTRIBUIDOR DE TROCO*****\n");
printf("\nInsira sua idade:\n");
scanf("%f",&I);
if (I>=5&&I<=7) printf("\nSua categoria eh Infantil A!\n");
else 
   if (I>=8&&I<=10) printf("\nSua categoria eh Infantil B!\n");
   else
       if (I>=11&&I<=13) printf("\nSua categoria eh Juvenil A!\n");
       else
           if (I>=14&&I<=17) printf("\nSua categoria eh Juvenil B!\n");
           else
               if (I>=18) printf("\nSua categoria eh Adulto!\n");
               else
                  if (I<=4) printf("\nVoce nao tem classificação!\n");   
system("pause");
}
