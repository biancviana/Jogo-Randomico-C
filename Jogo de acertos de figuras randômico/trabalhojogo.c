#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
int main (void)
{
    setlocale (LC_ALL, "portuguese");
    srand(time(NULL));
    int i=0, sorteio=0, aposta=0, acertos=0, erros=0, fases=0, repeticao=0;
    printf ("DO YOU WANT PLAY A GAME?\nInforme quantas vezes deseja jogar: ");
    scanf ("%i", &fases);
    for (repeticao=0; repeticao<fases; repeticao++)
    {
        printf ("\nX-----------------------X");
        printf ("\n\n\t **   **");
        printf ("\n\t *******");
        printf ("\n\t  *****");
        printf ("\n\t   ***");
        printf ("\n\t    *");
        printf ("\nX-----------------------X");
        printf ("\n\n\t    *");
        printf ("\n\t    *");
        printf ("\n\t  *****");
        printf ("\n\t    *");
        printf ("\n\t    *");
        printf ("\nX-----------------------X");
        printf ("\n\n\t    *");
        printf ("\n\t    *");
        printf ("\n\t   ***");
        printf ("\n\t    *");
        printf ("\n\t   * *");
        printf ("\nX-----------------------X");
        printf ("\n\n\tEscolha entre os três símbolos, respectivamente 1, 2 ou 3: ");
        scanf ("%i", &aposta);

        sorteio=rand()%3+1;

        if (sorteio==1)
        {
            printf ("\n\n\t **   **");
            printf ("\n\t *******");
            printf ("\n\t  *****");
            printf ("\n\t   ***");
            printf ("\n\t    *");
        }
        else if (sorteio==2)
        {
            printf ("\n\n\t    *");
            printf ("\n\t    *");
            printf ("\n\t  *****");
            printf ("\n\t    *");
            printf ("\n\t    *");
        }
        else if (sorteio==3)
        {
            printf ("\n\n\t    *");
            printf ("\n\t    *");
            printf ("\n\t   ***");
            printf ("\n\t    *");
            printf ("\n\t   * *");
        }
        if (sorteio==aposta)
        {
            printf ("\n\n\t Parabéns, você ganhou!\n\n");
            acertos++;
        }

        else
        {
            printf ("\n\n\t Que pena, você perdeu!\n\n");
            erros++;
        }
        system("pause");
    }
    if (acertos>erros)
    {
        printf ("\n\n\t -Uau, muito bem! Você ganhou a rodada!");
    }
    else if(acertos == erros)
    {
        printf ("\n\n\t -Uhhh, na trave! Deu empate!");
    }
    else
    {
        printf ("\n\n\t -Poxa, que pena! Você perdeu a rodada!");
    }
    printf ("\n\n\tNúmero de vitória(s): %i\n", acertos);
    printf ("\tNúmero de derrota(s): %i", erros);
}






