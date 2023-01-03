#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int media (int aleatorios [], float div){
	int soma = 0;
	
	for (int i=0; i<15; i++){
		if (aleatorios [i]>div)
			soma ++;
	}

	return soma;
}

int main (){
	
	int aleatorios [15], quantidade;
	float div, soma=0;
	
	srand (time (NULL));
	
	for (int i=0; i<15; i++){
		aleatorios [i] = rand ()%26;		
		printf ("%d\n", aleatorios [i]);
		soma = soma + aleatorios [i];
	}
	
	div = soma/15;

	quantidade = media (aleatorios, div);
	
	printf ("A quantidade de números com o valor maior que a média é: %d\n", quantidade);
}
