#include <stdio.h>

// eliminar uma letra de uma string
void eliminar (char v [], char ch){

    for (int i=0; v [i]!=0; i++){
        if (v [i] == ch){
            for (int j=i; v [j]!=0; j++){
                v [j] = v [j+1];
            }
        }
    }

    printf ("%s", v);
}

int main (){
    char ch;

    char v [20];
    printf ("Digite a sua string: ");
    gets (v);

    printf ("Digite a letra que quer eliminar: ");
    scanf ("%c", &ch);

    eliminar (v, ch);
}