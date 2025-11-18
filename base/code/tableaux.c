#include <stdio.h>

int main(void)
{

    int tableau[2][3] = {{1,2,3},{4,5,6}}; // tableau multi dimensions
    for (int i = 0; i < 2 ; i++)// on parcours le premier tableau (de 2)
    { 
        for (int j = 0; j< 3 ; j++) // on parcours le deuxieme tableau (de 3)
        {
            printf("%d" , tableau[i][j]);
        }
        printf("\n");
    }
    return 0;
}