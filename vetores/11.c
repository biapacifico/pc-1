#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compara (int vetor1[], int vetor2[]){
    int cont=0;

    for (int i=0; i<15; i++){
        if (vetor1[i]==vetor2[i]){
            cont++;
        }
        if (cont==15){
            return 1;
        }
    }

    return 0;
}

int main (){
    int res;

    srand (time (NULL));

    int vetor1 [15];
    for (int i=0; i<15; i++){
        vetor1 [i] = rand()%66;
    }

    int vetor2 [15];
    for (int i=0; i<15; i++){
        vetor2 [i] = rand()%66;
    }

    res = compara (vetor1, vetor2);

    if (res==1){
        printf ("Os vetores são iguais.");
    }
    else {
        printf ("Os vetores são diferentes.");
    }
}