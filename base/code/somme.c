#include <stdio.h>

/*
On veut demander un nombre puis parcourir de 0 à ce nombre pour ajouter chaque nombre qu'il possèe et en faire la somme 
exemple 5 : 0+1+2+3+4+5 = 15
*/

int main(void)
{
    int nombre;
    int somme = 0;
    printf("Choisir un nombre : ");
    scanf("%d",&nombre);
    
    for (int i = 0; i <= nombre ; i++){ // pour i = 0 ; tant qu'il est pas = a 5 ; i +1
        somme += i; // on ajoute i à la somme
    }
    printf("%d est la somme de tout les nombres de %d\n",somme,nombre);
    return 0;
}