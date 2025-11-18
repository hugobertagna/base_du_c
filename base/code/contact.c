#include <stdio.h>

/*
Création d'une structure contact avec prénom numéro et age
*/
struct Contact 
    {
        char prenom[30];
        char numero[10];
        int age;
    };

int main(void){
    struct Contact contacts[2]; // on initialise le tableau de 2 contacts via la structure
    for (int i = 0; i < 2 ; i++){ // on parcours le tableau pour le remplir
        printf("Entrez un prénom");
        scanf("%s", contacts[i].prenom);

        printf("Entrez un age");
        scanf("%d", &contacts[i].age);// on pointe seulement pour le int ici avec &

        printf("Entrez un numéro");
        scanf("%s", contacts[i].numero);
    
    
    } printf("\n Liste de contact : "); //maintenant on veut afficher la liste de contact
    for (int i = 0 ; i < 2 ; i++)//on reparcours les contacts
    {
        printf("Contact numéro : %d\n", i + 1 );
        printf("Prénom : %s\n", contacts[i].prenom);//on affiche le prenom en parcours le tableau à l'indice i
        printf("age : %d\n", contacts[i].age);//pareil
        printf("numéro : %s\n", contacts[i].numero); // pareil
    }


    return 0;
}