/*olimpiadi problema 3*/

#include <stdio.h>

int main ()
{
   int carte[100], n, poss[100], l, i, z, j, lavoro[100], r, o = 0;
  
   printf("inserisci il numero di carte che sia dispari");
   do 
   {
       scanf("%d", &n);
   }
   while(n % 2 == 0);

   for (i = 0; i < n; i++)
       scanf("%d", &carte[i]);
   for (i = 0; i < n; i++)
   {
       for (j = 0; j < n; j++) 
       {
           lavoro[i] = carte [i];

           for (l = 0; l < n ; l++)
           {
 
               for (z = j; z < n; z++)
               {
               
                   if (lavoro[z] == -1)
                       z++;
                   else 
                   {
                       if (lavoro[z] + lavoro[z+1] % 2 == 1)
                       {
                           lavoro[z] = -1;
                           lavoro[z+1] = -1;
                       }
                   }
               }
            }
            for (r = 0; r < n; r++)
            {
                if (lavoro[z] != -1)
                {
                    poss[o] = lavoro[z];
                    o++; 
                }
            }
         }
    }
    for (i = 0; i < n; i++)
        printf("%d", poss[i]);
    
    return 0;
   
}
    