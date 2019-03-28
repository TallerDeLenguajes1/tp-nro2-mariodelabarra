#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define FILAS 15

int main(void){
	setvbuf(stdout, NULL, _IONBF, 0);
	srand(time(NULL));
	int Columnas, FilasVec, ColumVec, numAle, resultado, i;
	Columnas = (rand()%(11 + 5));
	int * Vec[FILAS], VecPares[FILAS];

	VecPares[FILAS] = (int ) malloc(sizeof(int)*15);

	for(FilasVec=0; FilasVec<FILAS; FilasVec++){
		Vec[FilasVec] = (int *) malloc(sizeof(int) * ColumVec);
		i=0;
		for(ColumVec=0; ColumVec<Columnas; ColumVec++){
			numAle = rand() % 900 + 100;
			*((*(Vec+FilasVec))+ColumVec) = numAle;
			resultado = numAle%2;
			if(resultado==0){
				i++;
			}
		}
		*(VecPares+FilasVec) = i;
	}

	for(FilasVec=0; FilasVec<FILAS; FilasVec++){
		for(ColumVec=0; ColumVec<Columnas; ColumVec++){
			printf("%d   ", *((*(Vec+FilasVec))+ColumVec));
		}
		printf("\n");
	}
	for(FilasVec=0; FilasVec<FILAS; FilasVec++){
		printf("Fila %d = %d\n",FilasVec+1, *(VecPares+FilasVec));	
	}

	return 0;
}
