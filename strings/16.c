#include <stdio.h>

int tamanho (char texto []){
    int i=0;

    while (texto [i] != '\0'){
        i++;
    }

    return i;
}

int compara (char string1 [], char string2 []){

    if (tamanho (string1) != tamanho (string2)){
        return 0;
    }

    for (int i=0; i<tamanho (string1); i++){
        if (string1 [i] != string2 [i]){
            return 0;
        }
    }

    return 1;
}

int main (){
    int resultado;

    char string1 [20];
    printf ("Digite o primeiro string: ");
    gets (string1);

    char string2 [20];
    printf ("Digite o segundo string: ");
    gets (string2);

    resultado = compara (string1, string2);

    printf ("%d\n", resultado);
}