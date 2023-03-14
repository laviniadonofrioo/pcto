#include <stdio.h>
int main ()
{
    char x;
    printf("di che sesso sei");
    scanf ("%c", &x );
    if (x == 'M')
    {
printf ("sei maschio\n");
    }
    else if (x == 'F')
    {
   printf ("'sei femmina\n");
    }
    else if (x == 'N')
    {
printf("non identificato\n");

    }
    else 
    {
 printf ("'messaggio di errore");
    }