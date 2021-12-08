#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define T 3

main(){
int OP=0,SOMA1=0,SOMA2=0,SOMA3=0,SOMA4=0,SOMA5=0,SOMA6=0,SOMA7=0,I=0,J=0,K,L,M,N,MAT[T][T];;

for (M=0;M<T;M++){
	for (N=0;N<T;N++){
		MAT[M][N]=4;
	}
}
printf("\nAs regras do jogo sao assim: \n1- As casas onde esta o numero 4 sao as vazias.\n2- Use 7 para (xis) e 0 para (bolinha).\n3- Insira primeiro a LINHA e depois a COLUNA onde deseja por o seu numero\n4- Vence quem fechar uma sequencia de 3 numeros seguidos\n");
printf("\nO jogo da velha comeca assim:\n");
system("pause");
K=0;
printf("\n      %d      %d      %d\n\n\n%d     %d      %d      %d\n\n\n%d     %d      %d      %d \n\n\n%d     %d      %d      %d \n",K,K+1,K+2,K,MAT[K][K],MAT[K][K+1],MAT[K][K+2],K+1,MAT[K+1][K],MAT[K+1][K+1],MAT[K+1][K+2],K+2,MAT[K+2][K], MAT[K+2][K+1],MAT[K+2][K+2]);	
printf("\nQuem comeca eh o jogador que usa o 7:\n");
printf("\nEm que casa deseja colocar o 7:\n");
scanf ("%d%d",&I,&J);
MAT[I][J]=MAT[I][J]+3;
I=0;J=0;
printf("\n      %d      %d      %d\n\n\n%d     %d      %d      %d\n\n\n%d     %d      %d      %d \n\n\n%d     %d      %d      %d \n",K,K+1,K+2,K,MAT[K][K],MAT[K][K+1],MAT[K][K+2],K+1,MAT[K+1][K],MAT[K+1][K+1],MAT[K+1][K+2],K+2,MAT[K+2][K], MAT[K+2][K+1],MAT[K+2][K+2]);
printf("\nAgora eh a vez do jogador 0:\n");
printf("\nEm que casa deseja colocar o 0:\n");
scanf ("%d""%d",&I,&J);
MAT[I][J]=MAT[I][J]-4;
I=0;J=0;
printf("\n      %d      %d      %d\n\n\n%d     %d      %d      %d\n\n\n%d     %d      %d      %d \n\n\n%d     %d      %d      %d \n",K,K+1,K+2,K,MAT[K][K],MAT[K][K+1],MAT[K][K+2],K+1,MAT[K+1][K],MAT[K+1][K+1],MAT[K+1][K+2],K+2,MAT[K+2][K], MAT[K+2][K+1],MAT[K+2][K+2]);
printf("\nAgora eh a vez do jogador 7:\n");
printf("\nEm que casa deseja colocar o 7:\n");
scanf ("%d%d",&I,&J);
MAT[I][J]=MAT[I][J]+3;
I=0;J=0;
printf("\n      %d      %d      %d\n\n\n%d     %d      %d      %d\n\n\n%d     %d      %d      %d \n\n\n%d     %d      %d      %d \n",K,K+1,K+2,K,MAT[K][K],MAT[K][K+1],MAT[K][K+2],K+1,MAT[K+1][K],MAT[K+1][K+1],MAT[K+1][K+2],K+2,MAT[K+2][K], MAT[K+2][K+1],MAT[K+2][K+2]);
printf("\nAgora eh a vez do jogador 0:\n");
printf("\nEm que casa deseja colocar o 0:\n");
scanf ("%d""%d",&I,&J);
MAT[I][J]=MAT[I][J]-4;
I=0;J=0;
printf("\n      %d      %d      %d\n\n\n%d     %d      %d      %d\n\n\n%d     %d      %d      %d \n\n\n%d     %d      %d      %d \n",K,K+1,K+2,K,MAT[K][K],MAT[K][K+1],MAT[K][K+2],K+1,MAT[K+1][K],MAT[K+1][K+1],MAT[K+1][K+2],K+2,MAT[K+2][K], MAT[K+2][K+1],MAT[K+2][K+2]);
printf("\nAgora eh a vez do jogador 7:\n");
printf("\nEm que casa deseja colocar o 7:\n");
scanf ("%d%d",&I,&J);
MAT[I][J]=MAT[I][J]+3;
I=0;J=0;
for (I=0;I<T;I++){
	J=0;
	SOMA1=MAT[I][J]+MAT[I][J+1]+MAT[I][J+2]+MAT[I][J+3];
	SOMA2=MAT[I+1][J]+MAT[I+1][J+1]+MAT[I+1][J+2]+MAT[I][J+3];
	SOMA3=MAT[I+2][J]+MAT[I+2][J+1]+MAT[I+2][J+2]+MAT[I][J+3];
}
for (J=0;J<T;J++){
	I=0;
	SOMA4=MAT[I][J]+MAT[I+1][J]+MAT[I+2][J];
	SOMA5=MAT[I][J+1]+MAT[I+1][J+1]+MAT[I+2][J+1];
	SOMA6=MAT[I][J+2]+MAT[I+1][J+2]+MAT[I+2][J+2];
}
for (I=0;I<T;I++){
	J=I;
	SOMA7=SOMA7+MAT[I][J];
}
if ((SOMA1==21)||(SOMA2==21)||(SOMA3==21)||(SOMA4==21)||(SOMA5==21)||(SOMA6==21)||(SOMA7==21)){
	printf("\nFIM DE JOGO, O JOGADOR X VENCEU:\n");	
	OP=1;
}
if ((SOMA1==0)||(SOMA2==0)||(SOMA3==0)||(SOMA4==0)||(SOMA5==0)||(SOMA6==0)||(SOMA7==0)){
	printf("\nFIM DE JOGO, O JOGADOR 0 VENCEU:\n");	
	OP=1;
}
if (OP!=1){
	if ((SOMA1==21)||(SOMA2==21)||(SOMA3==21)||(SOMA4==21)||(SOMA5==21)||(SOMA6==21)||(SOMA7==21)||(SOMA1==0)||(SOMA2==0)||(SOMA3==0)||(SOMA4==0)||(SOMA5==0)||(SOMA6==0)||(SOMA7==0)){
		I=0;J=0;SOMA1=0;SOMA2=0;SOMA3=0;SOMA4=0;SOMA5=0;SOMA6=0;SOMA7=0;
		printf("\n      %d      %d      %d\n\n\n%d     %d      %d      %d\n\n\n%d     %d      %d      %d \n\n\n%d     %d      %d      %d \n",K,K+1,K+2,K,MAT[K][K],MAT[K][K+1],MAT[K][K+2],K+1,MAT[K+1][K],MAT[K+1][K+1],MAT[K+1][K+2],K+2,MAT[K+2][K], MAT[K+2][K+1],MAT[K+2][K+2]);
		printf("\nAgora eh a vez do jogador 0:\n");
		printf("\nEm que casa deseja colocar o 0:\n");
		scanf ("%d""%d",&I,&J);
		MAT[I][J]=MAT[I][J]-4;
		for (I=0;I<T;I++){
			J=0;
			SOMA1=MAT[I][J]+MAT[I][J+1]+MAT[I][J+2]+MAT[I][J+3];
			SOMA2=MAT[I+1][J]+MAT[I+1][J+1]+MAT[I+1][J+2]+MAT[I][J+3];
			SOMA3=MAT[I+2][J]+MAT[I+2][J+1]+MAT[I+2][J+2]+MAT[I][J+3];
		}
		for (J=0;J<T;J++){
			I=0;
			SOMA4=MAT[I][J]+MAT[I+1][J]+MAT[I+2][J];
			SOMA5=MAT[I][J+1]+MAT[I+1][J+1]+MAT[I+2][J+1];
			SOMA6=MAT[I][J+2]+MAT[I+1][J+2]+MAT[I+2][J+2];
		}
		for (I=0;I<T;I++){
			J=I;
			SOMA7=SOMA7+MAT[I][J];
		}
		if ((SOMA1==21)||(SOMA2==21)||(SOMA3==21)||(SOMA4==21)||(SOMA5==21)||(SOMA6==21)||(SOMA7==21)){
			printf("\nFIM DE JOGO, O JOGADOR X VENCEU:\n");	
		}
		if ((SOMA1==0)||(SOMA2==0)||(SOMA3==0)||(SOMA4==0)||(SOMA5==0)||(SOMA6==0)||(SOMA7==0)){
			printf("\nFIM DE JOGO, O JOGADOR 0 VENCEU:\n");	
		}
		if (OP!=1){
			if ((SOMA1==21)||(SOMA2==21)||(SOMA3==21)||(SOMA4==21)||(SOMA5==21)||(SOMA6==21)||(SOMA7==21)||(SOMA1==0)||(SOMA2==0)||(SOMA3==0)||(SOMA4==0)||(SOMA5==0)||(SOMA6==0)||(SOMA7==0)){
				I=0;J=0;SOMA1=0;SOMA2=0;SOMA3=0;SOMA4=0;SOMA5=0;SOMA6=0;SOMA7=0;
				printf("\n      %d      %d      %d\n\n\n%d     %d      %d      %d\n\n\n%d     %d      %d      %d \n\n\n%d     %d      %d      %d \n",K,K+1,K+2,K,MAT[K][K],MAT[K][K+1],MAT[K][K+2],K+1,MAT[K+1][K],MAT[K+1][K+1],MAT[K+1][K+2],K+2,MAT[K+2][K], MAT[K+2][K+1],MAT[K+2][K+2]);
				printf("\nAgora eh a vez do jogador 7:\n");
				printf("\nEm que casa deseja colocar o 7:\n");
				scanf ("%d""%d",&I,&J);
				MAT[I][J]=MAT[I][J]+3;
				for (I=0;I<T;I++){
					J=0;
					SOMA1=MAT[I][J]+MAT[I][J+1]+MAT[I][J+2]+MAT[I][J+3];
					SOMA2=MAT[I+1][J]+MAT[I+1][J+1]+MAT[I+1][J+2]+MAT[I][J+3];
					SOMA3=MAT[I+2][J]+MAT[I+2][J+1]+MAT[I+2][J+2]+MAT[I][J+3];
				}
				for (J=0;J<T;J++){
					I=0;
					SOMA4=MAT[I][J]+MAT[I+1][J]+MAT[I+2][J];
					SOMA5=MAT[I][J+1]+MAT[I+1][J+1]+MAT[I+2][J+1];
					SOMA6=MAT[I][J+2]+MAT[I+1][J+2]+MAT[I+2][J+2];
				}
				for (I=0;I<T;I++){
					J=I;
					SOMA7=SOMA7+MAT[I][J];
				}
				if ((SOMA1==21)||(SOMA2==21)||(SOMA3==21)||(SOMA4==21)||(SOMA5==21)||(SOMA6==21)||(SOMA7==21)){
					printf("\nFIM DE JOGO, O JOGADOR X VENCEU:\n");	
					OP=1;
				}
				if ((SOMA1==0)||(SOMA2==0)||(SOMA3==0)||(SOMA4==0)||(SOMA5==0)||(SOMA6==0)||(SOMA7==0)){
					printf("\nFIM DE JOGO, O JOGADOR 0 VENCEU:\n");	
					OP=1;
				}
				if (OP!=1){
					if ((SOMA1==21)||(SOMA2==21)||(SOMA3==21)||(SOMA4==21)||(SOMA5==21)||(SOMA6==21)||(SOMA7==21)||(SOMA1==0)||(SOMA2==0)||(SOMA3==0)||(SOMA4==0)||(SOMA5==0)||(SOMA6==0)||(SOMA7==0)){
						I=0;J=0;SOMA1=0;SOMA2=0;SOMA3=0;SOMA4=0;SOMA5=0;SOMA6=0;SOMA7=0;
						printf("\n      %d      %d      %d\n\n\n%d     %d      %d      %d\n\n\n%d     %d      %d      %d \n\n\n%d     %d      %d      %d \n",K,K+1,K+2,K,MAT[K][K],MAT[K][K+1],MAT[K][K+2],K+1,MAT[K+1][K],MAT[K+1][K+1],MAT[K+1][K+2],K+2,MAT[K+2][K], MAT[K+2][K+1],MAT[K+2][K+2]);
						printf("\nAgora eh a vez do jogador 0:\n");
						printf("\nEm que casa deseja colocar o 0:\n");
						scanf ("%d""%d",&I,&J);
						MAT[I][J]=MAT[I][J]-4;
					for (I=0;I<T;I++){
						J=0;
						SOMA1=MAT[I][J]+MAT[I][J+1]+MAT[I][J+2]+MAT[I][J+3];
						SOMA2=MAT[I+1][J]+MAT[I+1][J+1]+MAT[I+1][J+2]+MAT[I][J+3];
						SOMA3=MAT[I+2][J]+MAT[I+2][J+1]+MAT[I+2][J+2]+MAT[I][J+3];
					}
					for (J=0;J<T;J++){
						I=0;
						SOMA4=MAT[I][J]+MAT[I+1][J]+MAT[I+2][J];
						SOMA5=MAT[I][J+1]+MAT[I+1][J+1]+MAT[I+2][J+1];
						SOMA6=MAT[I][J+2]+MAT[I+1][J+2]+MAT[I+2][J+2];
					}
					for (I=0;I<T;I++){
						J=I;
						SOMA7=SOMA7+MAT[I][J];
					}
					if ((SOMA1==21)||(SOMA2==21)||(SOMA3==21)||(SOMA4==21)||(SOMA5==21)||(SOMA6==21)||(SOMA7==21)){
						printf("\nFIM DE JOGO, O JOGADOR X VENCEU:\n");	
					}
					if ((SOMA1==0)||(SOMA2==0)||(SOMA3==0)||(SOMA4==0)||(SOMA5==0)||(SOMA6==0)||(SOMA7==0)){
						printf("\nFIM DE JOGO, O JOGADOR 0 VENCEU:\n");	
					}
					if (OP!=1){
						if ((SOMA1==21)||(SOMA2==21)||(SOMA3==21)||(SOMA4==21)||(SOMA5==21)||(SOMA6==21)||(SOMA7==21)||(SOMA1==0)||(SOMA2==0)||(SOMA3==0)||(SOMA4==0)||(SOMA5==0)||(SOMA6==0)||(SOMA7==0)){
							I=0;J=0;SOMA1=0;SOMA2=0;SOMA3=0;SOMA4=0;SOMA5=0;SOMA6=0;SOMA7=0;
							printf("\n      %d      %d      %d\n\n\n%d     %d      %d      %d\n\n\n%d     %d      %d      %d \n\n\n%d     %d      %d      %d \n",K,K+1,K+2,K,MAT[K][K],MAT[K][K+1],MAT[K][K+2],K+1,MAT[K+1][K],MAT[K+1][K+1],MAT[K+1][K+2],K+2,MAT[K+2][K], MAT[K+2][K+1],MAT[K+2][K+2]);
							printf("\nAgora eh a vez do jogador 7:\n");
							printf("\nEm que casa deseja colocar o 7:\n");
							scanf ("%d""%d",&I,&J);
							MAT[I][J]=MAT[I][J]+3;
							for (I=0;I<T;I++){
								J=0;
								SOMA1=MAT[I][J]+MAT[I][J+1]+MAT[I][J+2]+MAT[I][J+3];
								SOMA2=MAT[I+1][J]+MAT[I+1][J+1]+MAT[I+1][J+2]+MAT[I][J+3];
								SOMA3=MAT[I+2][J]+MAT[I+2][J+1]+MAT[I+2][J+2]+MAT[I][J+3];
							}
							for (J=0;J<T;J++){
								I=0;
								SOMA4=MAT[I][J]+MAT[I+1][J]+MAT[I+2][J];
								SOMA5=MAT[I][J+1]+MAT[I+1][J+1]+MAT[I+2][J+1];
								SOMA6=MAT[I][J+2]+MAT[I+1][J+2]+MAT[I+2][J+2];
							}
							for (I=0;I<T;I++){
								J=I;
								SOMA7=SOMA7+MAT[I][J];
							}
							if ((SOMA1==21)||(SOMA2==21)||(SOMA3==21)||(SOMA4==21)||(SOMA5==21)||(SOMA6==21)||(SOMA7==21)){
								printf("\nFIM DE JOGO, O JOGADOR X VENCEU:\n");	
								OP=1;
							}
							if ((SOMA1==0)||(SOMA2==0)||(SOMA3==0)||(SOMA4==0)||(SOMA5==0)||(SOMA6==0)||(SOMA7==0)){
								printf("\nFIM DE JOGO, O JOGADOR 0 VENCEU:\n");	
								OP=1;
							}
							if (OP!=1){
								if ((SOMA1==21)||(SOMA2==21)||(SOMA3==21)||(SOMA4==21)||(SOMA5==21)||(SOMA6==21)||(SOMA7==21)||(SOMA1==0)||(SOMA2==0)||(SOMA3==0)||(SOMA4==0)||(SOMA5==0)||(SOMA6==0)||(SOMA7==0)){
									I=0;J=0;SOMA1=0;SOMA2=0;SOMA3=0;SOMA4=0;SOMA5=0;SOMA6=0;SOMA7=0;
									printf("\n      %d      %d      %d\n\n\n%d     %d      %d      %d\n\n\n%d     %d      %d      %d \n\n\n%d     %d      %d      %d \n",K,K+1,K+2,K,MAT[K][K],MAT[K][K+1],MAT[K][K+2],K+1,MAT[K+1][K],MAT[K+1][K+1],MAT[K+1][K+2],K+2,MAT[K+2][K], MAT[K+2][K+1],MAT[K+2][K+2]);
									printf("\nAgora eh a vez do jogador 0:\n");
									printf("\nEm que casa deseja colocar o 0:\n");
									scanf ("%d""%d",&I,&J);
									MAT[I][J]=MAT[I][J]-4;
									for (I=0;I<T;I++){
										J=0;
										SOMA1=MAT[I][J]+MAT[I][J+1]+MAT[I][J+2]+MAT[I][J+3];
										SOMA2=MAT[I+1][J]+MAT[I+1][J+1]+MAT[I+1][J+2]+MAT[I][J+3];
										SOMA3=MAT[I+2][J]+MAT[I+2][J+1]+MAT[I+2][J+2]+MAT[I][J+3];
									}
									for (J=0;J<T;J++){
										I=0;
										SOMA4=MAT[I][J]+MAT[I+1][J]+MAT[I+2][J];
										SOMA5=MAT[I][J+1]+MAT[I+1][J+1]+MAT[I+2][J+1];
										SOMA6=MAT[I][J+2]+MAT[I+1][J+2]+MAT[I+2][J+2];
									}
									for (I=0;I<T;I++){
										J=I;
										SOMA7=SOMA7+MAT[I][J];
									}
									if ((SOMA1==21)||(SOMA2==21)||(SOMA3==21)||(SOMA4==21)||(SOMA5==21)||(SOMA6==21)||(SOMA7==21)){
										printf("\nFIM DE JOGO, O JOGADOR X VENCEU:\n");	
									}
									if ((SOMA1==0)||(SOMA2==0)||(SOMA3==0)||(SOMA4==0)||(SOMA5==0)||(SOMA6==0)||(SOMA7==0)){
										printf("\nFIM DE JOGO, O JOGADOR 0 VENCEU:\n");	
									}
									if (OP!=1){
										if ((SOMA1==21)||(SOMA2==21)||(SOMA3==21)||(SOMA4==21)||(SOMA5==21)||(SOMA6==21)||(SOMA7==21)||(SOMA1==0)||(SOMA2==0)||(SOMA3==0)||(SOMA4==0)||(SOMA5==0)||(SOMA6==0)||(SOMA7==0)){
											I=0;J=0;SOMA1=0;SOMA2=0;SOMA3=0;SOMA4=0;SOMA5=0;SOMA6=0;SOMA7=0;
											printf("\n      %d      %d      %d\n\n\n%d     %d      %d      %d\n\n\n%d     %d      %d      %d \n\n\n%d     %d      %d      %d \n",K,K+1,K+2,K,MAT[K][K],MAT[K][K+1],MAT[K][K+2],K+1,MAT[K+1][K],MAT[K+1][K+1],MAT[K+1][K+2],K+2,MAT[K+2][K], MAT[K+2][K+1],MAT[K+2][K+2]);
											printf("\nAgora eh a vez do jogador 7:\n");
											printf("\nEm que casa deseja colocar o 7:\n");
											scanf ("%d""%d",&I,&J);
											MAT[I][J]=MAT[I][J]+3;
											for (I=0;I<T;I++){
												J=0;
												SOMA1=MAT[I][J]+MAT[I][J+1]+MAT[I][J+2]+MAT[I][J+3];
												SOMA2=MAT[I+1][J]+MAT[I+1][J+1]+MAT[I+1][J+2]+MAT[I][J+3];
												SOMA3=MAT[I+2][J]+MAT[I+2][J+1]+MAT[I+2][J+2]+MAT[I][J+3];
											}
											for (J=0;J<T;J++){
												I=0;
												SOMA4=MAT[I][J]+MAT[I+1][J]+MAT[I+2][J];
												SOMA5=MAT[I][J+1]+MAT[I+1][J+1]+MAT[I+2][J+1];
												SOMA6=MAT[I][J+2]+MAT[I+1][J+2]+MAT[I+2][J+2];
											}
											for (I=0;I<T;I++){
												J=I;
												SOMA7=SOMA7+MAT[I][J];
											}
											if ((SOMA1==21)||(SOMA2==21)||(SOMA3==21)||(SOMA4==21)||(SOMA5==21)||(SOMA6==21)||(SOMA7==21)){
												printf("\nFIM DE JOGO, O JOGADOR X VENCEU:\n");	
												OP=1;
											}
											if ((SOMA1==0)||(SOMA2==0)||(SOMA3==0)||(SOMA4==0)||(SOMA5==0)||(SOMA6==0)||(SOMA7==0)){
												printf("\nFIM DE JOGO, O JOGADOR 0 VENCEU:\n");	
												OP=1;
											}
											if (OP!=1){
												if ((SOMA1==21)||(SOMA2==21)||(SOMA3==21)||(SOMA4==21)||(SOMA5==21)||(SOMA6==21)||(SOMA7==21)||(SOMA1==0)||(SOMA2==0)||(SOMA3==0)||(SOMA4==0)||(SOMA5==0)||(SOMA6==0)||(SOMA7==0)){
													I=0;J=0;SOMA1=0;SOMA2=0;SOMA3=0;SOMA4=0;SOMA5=0;SOMA6=0;SOMA7=0;
													printf("\n      %d      %d      %d\n\n\n%d     %d      %d      %d\n\n\n%d     %d      %d      %d \n\n\n%d     %d      %d      %d \n",K,K+1,K+2,K,MAT[K][K],MAT[K][K+1],MAT[K][K+2],K+1,MAT[K+1][K],MAT[K+1][K+1],MAT[K+1][K+2],K+2,MAT[K+2][K], MAT[K+2][K+1],MAT[K+2][K+2]);
													printf("\nAgora eh a vez do jogador 0:\n");
													printf("\nEm que casa deseja colocar o 0:\n");
													scanf ("%d""%d",&I,&J);
													MAT[I][J]=MAT[I][J]-4;
													for (I=0;I<T;I++){
														J=0;
														SOMA1=MAT[I][J]+MAT[I][J+1]+MAT[I][J+2]+MAT[I][J+3];
														SOMA2=MAT[I+1][J]+MAT[I+1][J+1]+MAT[I+1][J+2]+MAT[I][J+3];
														SOMA3=MAT[I+2][J]+MAT[I+2][J+1]+MAT[I+2][J+2]+MAT[I][J+3];
													}
													for (J=0;J<T;J++){
														I=0;
														SOMA4=MAT[I][J]+MAT[I+1][J]+MAT[I+2][J];
														SOMA5=MAT[I][J+1]+MAT[I+1][J+1]+MAT[I+2][J+1];
														SOMA6=MAT[I][J+2]+MAT[I+1][J+2]+MAT[I+2][J+2];
													}
													for (I=0;I<T;I++){
														J=I;
														SOMA7=SOMA7+MAT[I][J];
													}
													if ((SOMA1==21)||(SOMA2==21)||(SOMA3==21)||(SOMA4==21)||(SOMA5==21)||(SOMA6==21)||(SOMA7==21)){
														printf("\nFIM DE JOGO, O JOGADOR X VENCEU:\n");	
													}
													if ((SOMA1==0)||(SOMA2==0)||(SOMA3==0)||(SOMA4==0)||(SOMA5==0)||(SOMA6==0)||(SOMA7==0)){
														printf("\nFIM DE JOGO, O JOGADOR 0 VENCEU:\n");	
													}
													if ((SOMA1!=21)||(SOMA2!=21)||(SOMA3!=21)||(SOMA4!=21)||(SOMA5!=21)||(SOMA6!=21)||(SOMA7!=21)||(SOMA1!=0)||(SOMA2!=0)||(SOMA3!=0)||(SOMA4!=0)||(SOMA5!=0)||(SOMA6!=0)||(SOMA7!=0)){
														printf("\n      %d      %d      %d\n\n\n%d     %d      %d      %d\n\n\n%d     %d      %d      %d \n\n\n%d     %d      %d      %d \n",K,K+1,K+2,K,MAT[K][K],MAT[K][K+1],MAT[K][K+2],K+1,MAT[K+1][K],MAT[K+1][K+1],MAT[K+1][K+2],K+2,MAT[K+2][K], MAT[K+2][K+1],MAT[K+2][K+2]);
														printf("\nDEU VELHA, O JOGO TERMINOU EMPATADO!!\n");
														system("pause");
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
if (OP==1){
system("pause");	
}
}


