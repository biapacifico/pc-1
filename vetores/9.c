#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mostrar (int vetor []){

    for (int i=0; i<15; i++){
        printf ("%d ", vetor [i]);
    }
}

int repetidos (int vetor []){

    for (int i=0; i<15; i++){
        for (int j=0; j<15; j++){
            if (vetor [i]==vetor [j] && i!=j){
                vetor [j] = rand ()%26;
                i = -1;
                break;
            }
        }
    }

    printf ("\n\n");
    mostrar (vetor);
}

int main (){

    srand (time (NULL));

    int vetor [15];

    for (int i=0; i<15; i++){
        vetor [i] = rand ()%26;
        printf ("%d ", vetor [i]);
    }

    repitidos (vetor);
}