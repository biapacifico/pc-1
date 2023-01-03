#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int preenche (int *q, int *r, int *w){
    int k=0;

    for (int i=0; i<12; i++){
        for (int j=0; j<20; j++){
            if (q [i] == r [j]){
                k++;
                w = (int*) realloc (w, k*sizeof(int));
                for (int l=k-1; l<k; l++){
                    w [l] = r [j];
                }
            }
        }
    }

    for (int i=0; i<k; i++){
        for (int j=0; j<k; j++){
            if (w[i] == w[j] && i!=j){
                w[j] = w[j+1];
                k--;
                i=-1;
                break;
            }
        }
    }

    return k;
}

int main (){
    int *q, *r, *w, k;

    srand (time (NULL));

    q = (int*) malloc (12*sizeof(int));
    for (int i=0; i<12; i++){
        q [i] = rand ()%36;
        printf ("%i ", q[i]);
    }

    printf ("\n");
    r = (int*) malloc (20*sizeof(int));
    for (int i=0; i<20; i++){
        r [i] = rand ()%36;
        printf ("%i ", r[i]);
    }

    w = (int*) malloc (1*sizeof(int));

    k = preenche (q, r, w);

    printf ("\n");
    for (int i=0; i<k; i++){
        printf ("%i ", w [i]);
    }
}