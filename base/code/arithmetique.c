#include <stdio.h>

int main(void){
    int a = 10, b = 5; //manière rapide d'assigner des valeurs à plusieurs variables du même types

    int somme = a + b;
    int difference = a - b;
    int produit = a * b;
    float quotient = a / b;
    int modulo = a % 3; //reste de la division (ex : 5 % 3 = 2)

    printf("%d\n",somme);
    printf("%d\n",difference);
    printf("%d\n",produit);
    printf("%.2f\n",quotient);
    printf("%d\n",modulo);

    return 0;
}