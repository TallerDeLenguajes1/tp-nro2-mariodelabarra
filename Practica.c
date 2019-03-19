#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int main(void){
	int Arreglo[MAX], i=0, *puntArre;

	puntArre = Arreglo;
	while(i<5){
		puts("Ingrese un numero: ");
		scanf("%d", &Arreglo[i]);
		i++;
	}
	i=0;
	puts("Consigna 1:\n");
	while(i<5){
		printf("Arreglo[%d] = %d\n", i+1,Arreglo[i]);
		i++;
	}
	puts("Consigna 2:\n");
	for(i=0;i<5;i++){
		printf("Arreglo[%d] = %d\n", i+1, puntArre[i]);
	}
	puts("Consigna 3:\n");
	i=0;
	while(i<5){
		printf("Arreglo[%d] = %d\n", i+1, *(Arreglo+i));
		i++;
	}
	i=0;
	puts("Consigna 4:\n");
	while(i<5){
		printf("Arreglo[%d] = %p\n", i+1, &puntArre[i]);
		i++;
	}
	printf("El tamaño del arreglo es: %d\n", sizeof(Arreglo));
	printf("El tamanio del puntero es: %d\n", sizeof(puntArre));
	return 0;
}