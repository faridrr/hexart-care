#include <stdio.h>
#include <stdlib.h>
#include "donnes.h"


typedef struct donnee donnee ;


int lecteur(donnee *tab)    //fonction lecteur
{
     int i;

    FILE* fichier = NULL;   // declarationde nom de fichier
    fichier = fopen("C:\\Users\\farid\\Desktop\\données1.0.csv","r");  // overteur de fichier en mode lecteur
    if (fichier != NULL)
    { i=0;
        while(  ! feof(fichier)  ) // tant que la condition est defferente de la fin de fichier
        {
          fscanf(fichier,"%d;%d", &tab->temps[i],&tab->pulse[i]);
          i=i+1;
        }

        fclose(fichier);
     }

     else
     {
         printf(" imposible d'ouvrire le fichier");
     }
 return i;
}
