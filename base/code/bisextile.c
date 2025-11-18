#include <stdio.h>

int main(void){

    int annee;
    printf("Donnez une année pour savoir si elle est bissextile : ");
    scanf("%d",&annee);



    /*
    Une année bisextile doit réunir 3 condtions :
    1. Divisible par 4.
    2. Pas divisible par 100.
    3. Sauf si divisible par 400.
    Si divisible par 400 alors la règle 2 n'est pas prise en compte
    */
    if (annee % 4 == 0 && annee % 100 != 0 || annee % 400 == 0){
        printf("L'année %d est bissextile\n",annee);
    }
    else{
        printf("L'année %d est pas bissextile\n",annee);
    }
}