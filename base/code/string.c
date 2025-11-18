#include <stdio.h>

int main(void)
{
    //Pour initialiser une chaines de charactères : 
    char prenom[32]; // prenom[32] est la variable str, 32 est le nb de charactères alloué max.
    printf("Entrez votre prénom : ");
    scanf("%s",prenom); //pas besoin de pointeur car prenom point vers une adresse mémoire car un tableau sans {} est un pointeur vers la première case du tableau
    printf("Bonjour, %s \n",prenom);
    return 0;
}