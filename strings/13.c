#include <stdio.h>

void concatenar (char s1 [], char s2 []){
    int cont=0;
    
    for (int i=0; s1 [i]!=0; i++){
        cont++;
    }
    
    for (int j=0; s2 [j]!=0; j++){
        s1 [cont] = s2 [j];
        cont++;
    }
    
    s1 [cont] = '\0';
    printf ("%s", s1);
}

int main (){

    char s1 [15];
    printf ("Digite S1: ");
    scanf ("%s", s1);

    char s2 [15];
    printf ("Digite S2: ");
    scanf ("%s", s2);

    concatenar (s1, s2);
}