#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int preencher (int *vetor, int n){

    srand (time (NULL));

    for (int i=0; i<n; i++){
        vetor [i] = rand ()%56;
    }

    return *vetor;
}

int main (){
    int n, *vetor;

    printf ("Digite o tamanho do vetor: ");
    scanf ("%i", &n);

    vetor = (int*) malloc (n * sizeof (int));

    preencher (vetor, n);

    for (int i=0; i<n; i++){
        printf ("%i ", vetor [i]);
    }

    free (vetor);
}