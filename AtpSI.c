#include <stdio.h>

main(){
	float numeros[10];
	int opcaoMenu;
	printf("Digite os 10 numeros para iniciar: ");
	scanf("%f %f %f %f %f %f %f %f %f %f", &numeros[0], &numeros[1], &numeros[2], &numeros[3], &numeros[4], &numeros[5], &numeros[6], &numeros[7], &numeros[8], &numeros[9]);

	while(1){
		printf("\n\nDigite um numero de 1 a 18 para selecionar um codigo, ou digite 0 para alterar os numeros: ");
		scanf("%d", &opcaoMenu);
		
		switch(opcaoMenu){
			case 0:
				printf("\n\nDigite os 10 numeros: ");
				scanf("%f %f %f %f %f %f %f %f %f %f", &numeros[0], &numeros[1], &numeros[2], &numeros[3], &numeros[4], &numeros[5], &numeros[6], &numeros[7], &numeros[8], &numeros[9]);
				break;
			default:
				printf("\n\nOpcao invalida");
				break;
		}
	}
}
