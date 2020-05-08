#include <stdio.h>
#include <locale.h>

void guilhermeFreitasReis();
void gustavoMeirelesSousa();
void igorFloresPatrocinio();
void igorJackson();
void marcos();
void pedro();
void victorPaizante();
void victorJavierFerreiraSilva();
void vitorLacerda();

main()
{
	setlocale(LC_ALL, "Portuguese");
	float numeros[10];
	int opcaoMenu;
	printf("Digite 10 numeros separados por espaco para iniciar: ");
	scanf("%f %f %f %f %f %f %f %f %f %f", &numeros[0], &numeros[1], &numeros[2], &numeros[3], &numeros[4], &numeros[5], &numeros[6], &numeros[7], &numeros[8], &numeros[9]);

	while (1)
	{
		printf("\n\nDigite um numero de 1 a 18 para selecionar uma funcao, ou digite 0 para alterar os numeros: ");
		scanf("%d", &opcaoMenu);
				
		switch (opcaoMenu)
		{
			case 0:
				printf("\n\nDigite 10 numeros separados por espaco: ");
				scanf("%f %f %f %f %f %f %f %f %f %f", &numeros[0], &numeros[1], &numeros[2], &numeros[3], &numeros[4], &numeros[5], &numeros[6], &numeros[7], &numeros[8], &numeros[9]);
				break;
			case 6:
				guilhermeFreitasReis();
				break;
			case 8:
			    gustavoMeirelesSousa();
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
			case 14:
				pedro();
				break;
			case 16:
				victorPaizante();
				break;
			case 17:
				victorJavierFerreiraSilva();
				break;
			case 18:
				vitorLacerda();
				break;
			default:
				printf("\n\nOpcao invalida");
				break;
		}
		
		printf("\nDigite qualque tecla para continuar.\n");
		fflush(stdin);
		getchar();
	}
}

void guilhermeFreitasReis()
{
	printf("\nGuilherme de Freitas Reis\n");
}
void gustavoMeirelesSousa()
{
	printf("\nGustavo Meireles Sousa\n");

}
void igorFloresPatrocinio()
{
	printf("\nIgor Flores Patrocinio\n");
}

void igorJackson()
{
	printf("\nIgor Jackson Leal Bovolenta\n");
}

void marcos()
{
	printf("\n\t------------ Marcos Vinicius de Sousa Pontes ------------\n");
}

void pedro()
{
	printf("\nPedro Henrique Bernardes Ribeiro\n");
}

void victorPaizante()
{
	printf("\nVictor Paizante\n");
}

void victorJavierFerreiraSilva()
{
	printf("\nVictor Javier Ferreira e Silva\n");
}

void vitorLacerda()
{
	printf("\nVitor Lacerda\n");
}
