#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

	srand (time(NULL));

	int aleatorios [15];

	for (int i=0; i<15; i++){
	aleatorios [i] = rand ()%56;
	printf ("%d\n", aleatorios [i]);
	}
}
