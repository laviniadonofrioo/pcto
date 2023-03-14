#include <stdio.h>
int main ()
{
    int x;
    printf("quale è il tuo anno di nascita?");
    scanf ("%d", &x);
    if (x < 1969)
    {
    printf ("'sei nato %d anni prima\n", 1969 - x);
    }
    else if (x > 1969)
    {
    printf ("sei nato %d anni dopo\n", x - 1969);
    }
    else 
    {
        printf("sei nato nel 1969\n");
    }
}
