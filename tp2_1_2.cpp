#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define N 4
#define M 5

int main(void){
	int f, c;
	double mt[N][M], num;
	setvbuf(stdout, NULL, _IONBF, 0);

	for(f=0;f<N;f++){
		for(c=0;c<M;c++){
			num = (double)(rand() % 25);
			*((*(mt+f))+c) = num;
		}
	}

	for(f=0;f<N;f++){
		for(c=0;c<M;c++){
			printf("%f   ", *((*(mt+f))+c));
		}
		printf("\n");
	}
	return 0;
}