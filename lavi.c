// SCRIVERE UN PROGRAMMA CHE CHIEDA ALL' UTENTE DI INSERIRE 
// UN INT ETA STAMPARE A SCHERMO IL VALORE

#include <stdio.h>
int main ()
{
    int eta;
    char sesso;
    printf("la mia etá è: ");
    scanf("%d", &eta);
    printf("il mio sesso è: ");
    scanf(" %c", &sesso);
    printf("la mia etá è: %d anni, %c sesso\n", eta, sesso);


}