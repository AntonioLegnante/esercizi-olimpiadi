/*eliminare elementi di un vettore */

#include <stdio.h>

int main ()
{
    int vett[10], i, n = 5, temp = 0, j;
    
    printf("inserisci gli elementi");
    for (i = 0; i < n; i++)
        scanf("%d", &vett[i]);
    
    for (i = 0; i < n; i++)
    {
         if (vett[i] % 2 == 0)
         {
             temp++;
             for (j = i; j < n; j++)
                  vett[j] = vett[j + 1];
         }
   }

   n -= temp;
   
   for (i = 0; i < n; i++)
       printf("%d", vett[i]);

   return 0;

}