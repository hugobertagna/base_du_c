#include <stdio.h>

int main(void){
    /*
    Suite de fibonnaci :
    On doit ajouter les deux dernier termes de la suite avec le nombre de terme
    */
   int fib1 = 0; //terme 1 de fibnonnaci
   int fib2 = 1; //temre 2 de fibonncaci
   int terme;
   int somme = 0;
    printf("Combien de termes voulez vous affichez");
    scanf("%d",&terme);

    for (int i = 0 ; i < terme ; i++){ // on parcours jusqu'au terme demandé
        somme = fib1 + fib2; //somme sera le résultat final on additionne terme -2 et terme -1
        fib1 = fib2; // on remplace terme -2 par terme -1
        fib2 = somme; // on remplace terme -1  par resultat terme
    }
    printf("Le rang %d de la suite de fibonacci est %d \n",terme,somme);
    
    return 0;
}