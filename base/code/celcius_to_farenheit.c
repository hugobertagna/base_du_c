#include <stdio.h>

int main(void){
    float temperature_celcius; //temperature choisis a convertir
    float temperature_fahrenheit; //resultat pour après
    printf("Entrez la température que vous voulez convertir en fahrenheit : ");
    scanf("%f",&temperature_celcius); //on recupere la valeur choisis
    printf("Vous avez choisis : %.2f \n", temperature_celcius); // on l'affiche
    temperature_fahrenheit = (temperature_celcius * 1.8 ) + 32 ; //on fait le calcul de conversion (C *1.8)+32
    printf("Cela donne %.2f \n",temperature_fahrenheit);// On l'affiche
}