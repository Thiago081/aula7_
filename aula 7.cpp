#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

int main () {
	
/*	 char opt = 's';
	int num;
	
	while (toupper(opt) == 'S') {
		printf("\nDigite um numero: ");
		scanf("%d", &num);
		fflush(stdin);
		printf("Dobro de %d e %d", num, num*2);
		
		printf("\nContinuar (s/n)?");
		scanf("%c", &opt);
		
	}
	*/
	
	
	
	
	
	//ex1
	
	/*int i = 0;
	
	printf("Numeros pares de 0 a 100: ");
	while (i <= 100) {
		if (i % 2 == 0) {
			printf("%d", i);
		}
		i++;
		printf("\n\n");
	}
	*/
	
	//ex2
	
	/*int i = 1;
	
	printf("Numeros impares de 0 a 100\n");
	do {
		printf("%d\n", i);
		i += 2;
	} while (i <= 100);
		printf("\n\n");
	*/	
		
		//ex3
		
		char opt;
	float num1, num2, media;
	do
	{
	do
	{
	printf("\nDigite a nota AC1: ");
	scanf("%f", &num1);
	fflush(stdin);
	
	if (num1 < 0 || num1 > 10)
	printf("\nValor invalido!\n\n");
	
	} while (num1 < 0 || num1 > 10);
	do
	{
	
	printf("\nDigite a nota AC2: ");
	scanf("%f", &num2);
	fflush(stdin);

	if (num2 < 0 || num2 > 10)
	printf("nValor invalido!\n\n");
	
	} while (num2 < 0 || num2 > 10);
	media = (num1 + num2) / 2;
	printf("\n\nMedia = %.2f\n\n", media);
	printf("\nDeseja calcula a media para outro aluno <S> ou <N>: ");
	scanf("%c", &opt);
	fflush(stdin);
	
	} while (opt != 'n' && opt != 'N');
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}