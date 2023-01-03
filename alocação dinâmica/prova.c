#include <stdio.h>
#include <stdlib.h>

int preenche (int* vetor){
    int n1, n2, res, total;

    printf ("Digite o tamanho do vetor: ");
    scanf ("%i", &n1);

    vetor = (int*) malloc (n1*sizeof(int));
    for (int i=0; i<n1; i++){
        vetor [i] = rand ()%26;
        printf ("%i ", vetor[i]);
    }

    do {
        printf ("\nDeseja adicionar mais números? Digite 1 para SIM e 0 para NÃO: ");
        scanf ("%i", &res);
        if (res == 1){
            printf ("\nDigite a quantidade que será adicionada: ");
            scanf ("%i", &n2);
            total = n1 + n2;
            vetor = (int*) realloc (vetor, total*sizeof(int));
            for (int i=n1; i<total; i++){
                vetor [i] = rand ()%26;
            }
            n1 = total;
        }
        else
        break;
    } while (res == 1);

    return vetor, total;
}

int main (){
    int *vetor, total;

    vetor, total = preenche (vetor);

    for (int i=0; i<total; i++){
        printf ("%i ", vetor [i]);
    }
}