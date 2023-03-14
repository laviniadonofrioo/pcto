#include <stdio.h>
int main()
{
    int x;
    int y;
    int z;
    
    
    printf("inserire 3 numeri");
    scanf("%d %d %d", &x, &y, &z);
   
    if (x + y > z && y + z > x && x + z > y)
    {
    printf ("è un trangolo\n");
    if (x == y && y== z)
    printf ("é un tringolo equilatero");
    else if (x!= y && y!= z && z != x)
    printf ("è un triangolo scaleno");
    else 
    printf ("è un triangolo isocele"); 
    }
    else
 {
    printf( "non è un triangolo\n");
 }
}