#include <stdio.h>


int main(void){
    // types de compateur : 
    /* 
    les retours : 1 = True et 0 = False
    1. Le "=="  si l'affirmation est vrai. Exemple : 5 == 3; va retourner 0 car 5 est differents de 3.
    2. le "!=" signifie "différent de". Exemple : 5 != 3; va retoruner 1 car 5 est different der 3
    3. le " < " plus petit que ou ">" plus grand que. Exemple : 5 < 3; va retoruner 0 car 5 est plus grand que 3
    4. le "<=" ou ">=" même principe mais on inclus le 3 supérieur ou égal / inférieur ou égal.
    */
    int nombre;
    printf("Choisir un nombre : ");
    scanf("%d", &nombre);

    // on veut print savoir si le nombre est positif / négatif ou égal à 0

    if (nombre > 0 ){ //si le nombre est supérieur à 0 
        printf("Le nombre est positif \n");
    }
    else if (nombre < 0){//si le nombre est inférieur à 0 
        printf("le nombre est négatif \n");
    }
    else { //si il est ni supérieur ni inférieur alors c'est 0
        printf("Le nombre est zéro \n");
    }


    return 0;
}