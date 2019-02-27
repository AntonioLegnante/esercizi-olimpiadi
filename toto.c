#include <stdio.h>

int main ()
{
    int gemme, complici, toto = 0, contatore = 0;
      
    printf("inserisci il numero di gemme da spartire");
    do
    {
        scanf("%d", &gemme);
    }while(gemme < 10 || gemme > 1000);

    printf("inserisci di complici compreso toto");
    do
    {
        scanf("%d", &complici);
    }while(complici < 2 || complici > 10);

    while (gemme > 0)
    {
        contatore++;

        if(gemme - contatore < 0)
            toto += gemme;
        else 
            toto += contatore;

        gemme -= contatore;
        gemme -= complici - 1;

    }

    printf("%d", toto);

    return 0;

}

    

    

    