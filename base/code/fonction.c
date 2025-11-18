#include <stdio.h>

int addition(int a, int b){ // fonction avec paremetre deux entier a et b
    return a + b; // l'addition basique
}



int main(void){
    int somme = addition(5,35);// on appelle la fonction addition dans la variable somme pour que 5 et 35 s'additionne 
    // donc a = 5 et b = 35
    printf("La somme est %d\n",somme);
    return 0;
}


