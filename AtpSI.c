#include <stdio.h>
#include <locale.h>

void igorFloresPatrocinio();
void victorJavierFerreiraSilva();
void igorJackson();
void marcos();
void vitorLacerda();

main(){
	setlocale(LC_ALL, "Portuguese");
	float numeros[10];
	int opcaoMenu;
	printf("Digite 10 números separados por espaço para iniciar: ");
	scanf("%f %f %f %f %f %f %f %f %f %f", &numeros[0], &numeros[1], &numeros[2], &numeros[3], &numeros[4], &numeros[5], &numeros[6], &numeros[7], &numeros[8], &numeros[9]);

	while(1){
		printf("\n\nDigite um número de 1 a 18 para selecionar uma função, ou digite 0 para alterar os números: ");
		scanf("%d", &opcaoMenu);
		
		switch(opcaoMenu){
			case 0:
				printf("\n\nDigite 10 números separados por espaço: ");
				scanf("%f %f %f %f %f %f %f %f %f %f", &numeros[0], &numeros[1], &numeros[2], &numeros[3], &numeros[4], &numeros[5], &numeros[6], &numeros[7], &numeros[8], &numeros[9]);
				break;		
			case 10:
				igorFloresPatrocinio();
				break;
			case 10:
				igorFloresPatrocinio();
        break;
			case 11:
				igorJackson();
				break;
			case 13:
				marcos();
				break;
      case 17:
				victorJavierFerreiraSilva();
				break;
			case 18:
				vitorLacerda();
				break;
			default:
				printf("\n\nOpção inválida");
				break;
		}
	}
}

void igorFloresPatrocinio(){
	printf("Igor Flores Patroc�nio");
}

void victorJavierFerreiraSilva(){
	printf("Victor Javier Ferreira e Silva");
}

void igorJackson(){
	printf("\nIgor Jackson Leal Bovolenta");
	fflush(stdin);
	getchar();
}

void marcos(){
	printf("\n\t------------ Marcos Vinicius de Sousa Pontes ------------\n");
	fflush(stdin);
	getchar();
}

void vitorLacerda(){
  printf("vitor Lacerda\n");
  fflush(stdin);
  getchar();
}
