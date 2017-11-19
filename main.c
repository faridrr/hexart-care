#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "donnes.h"
#include "actions.h"
#define ai = 100;


int main()
{
    int i,a;   // declaration des variables

   do
    { system("pause");
     donnee tab ;
    i=lecteur(&tab);
    a=menu();
    affichage(&tab,i,a);
    printf("\n\n");
    } while(a!=7);         // répeter l'action jusqu'a a=7


    return 0;
}
