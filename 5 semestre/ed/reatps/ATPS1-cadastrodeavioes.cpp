#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

struct aviao
{
	char modelo [15];
	char fabricante [30];
	int passageiros;
	float comprimento;
	float altura;
	float velocidade;
	float altitude;
	char motor [20];
};
struct aviao cadastroDeAvioes[30];

int main ()
{
    setlocale(LC_ALL, "Portuguese"); //Para incluir caracteres do Português
    system ("color 1E");
	int i, quantidade;

	printf ("Cadastramento de aviões - máximo de 30\n");
	printf ("=========================\n\n");
	printf ("Digite a quantidade de aviões a ser cadastrada:\n");
	scanf ("%d",&quantidade);
	printf ("\n---------------\n");
	system("cls");
	
	for (i=0;i<quantidade;i++){

		printf("Dê as caracteristicas do avião %d\n",i+1);
		printf("------------------------------\n");
		printf("Modelo:");
		scanf("%s",&cadastroDeAvioes[i].modelo);
		printf("\nFabricante:");
		scanf("%s",&cadastroDeAvioes[i].fabricante);
		printf("\nPassageiros:");
		scanf("%d",&cadastroDeAvioes[i].passageiros);
		printf("\nComprimento:");
		scanf("%f",&cadastroDeAvioes[i].comprimento);
		printf("\nAltura:");
		scanf("%f",&cadastroDeAvioes[i].altura);
		printf("\nVelocidade:");
		scanf("%f",&cadastroDeAvioes[i].velocidade);
		printf("\nAltitude:");
		scanf("%f",&cadastroDeAvioes[i].altitude);
		printf("\nMotor:");
		scanf("%s",&cadastroDeAvioes[i].motor);
		system ("cls");

	}
	
	printf("\n\nEm seguida, serão exibidos todos os aviões cadastrados\n");
	system("pause");
	system("cls");
	
	for (i=0;i<quantidade;i++){
	
		printf("====Aviao nº%d=====\n\n",i+1);
		printf("Modelo %s", cadastroDeAvioes[i].modelo);
		printf("\nFabricante: %s" ,cadastroDeAvioes[i].fabricante);
		printf("\nPassageiros: %d" ,cadastroDeAvioes[i].passageiros);
		printf("\nComprimento: %f metros" ,cadastroDeAvioes[i].comprimento);
		printf("\nAltura: %f metros" ,cadastroDeAvioes[i].altura);
		printf("\nVelocidade: %f km/h" ,cadastroDeAvioes[i].velocidade);
		printf("\nAltitude: %f milhas" ,cadastroDeAvioes[i].altitude);
		printf("\nMotor: %s" ,cadastroDeAvioes[i].motor);
        printf("\n------------------\n");

		system ("pause");
		system ("cls");

	}


}
