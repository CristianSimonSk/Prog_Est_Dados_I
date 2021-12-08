#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdio.h>
#define T 3

typedef struct t_loja
{
int COD, QTD;
char DESC[10];
} t_loja;

void entrada(t_loja *vet, int t){
int i=0;
for(i=0;i<t;i++) {
	printf("\nEntrar com dados no estoque");
	printf("\ncódigo:");
	scanf("%d",&vet[i].COD);
	printf("\nDescrição do produto:");
	fflush (stdin);
	scanf("%s",&vet[i].DESC);
	printf("\nQuantidade:");
	scanf("%d", &vet[i].QTD);
	}
}	
void saida(t_loja *vet, int v, int t){
int i;
for(i=0;i<t;i++) {
	if(vet[i].COD==v)
		vet[i].COD=-1;
	}
}
void relatorio(t_loja *vet,int t){
int i;
for(i=0;i<t;i++) {
	if(vet[i].COD>=0){
		printf("\n Código: %d" ,vet[i].COD);
		printf("\n Produto %s", vet[i].DESC);
		printf("\n Quantidade %d ",vet[i].QTD);
		}
	}
}
int main(){

setlocale(LC_ALL,"portuguese");

t_loja loja[T];

int CODIGO, OP;
{
printf ("\n DIGITE\n 1- Para entrar com produtos no estoque. \n 2- Para remover produtos do estoque. \n 3- Para obter um relatorio dos produtos do estoque.\n 4- Para sair. \n");	
scanf("%d", &OP);
if (OP!=4){
	switch (OP){
		case 1: entrada(loja, T);
		break;
		case 2: printf("Digite o código do produto a ser retirado: ");
		scanf("%d",&CODIGO);
		saida(loja, CODIGO,T);
		break;
		case 3: relatorio(loja,T);
		break;
		default: printf("Opção inválida");
		break;
		}
	}
}
while(OP!=4);
return 0;
}
