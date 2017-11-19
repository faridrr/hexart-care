#include <stdio.h>
#include <stdlib.h>
#include "donnes.h"


int affichage(donnee *tab,int max,int a) //traitement et affichage de donnée
{
    int i,j,temps,pulse,nbr,r;
    float b;
 switch (a)
  {
    case 1 :

    printf("Affichage  des donnees dans l'ordre du fichier csv\n\n\n");
    for(i=0;i<max-1;i++)               // parcours dans le tableaux de structure
    {
        printf("\ttemps[%d] \t  : %d   \t    pouls[%d]  \t :  %d\n",i+1,tab->temps[i],i+1,tab->pulse[i]);
    }
    break;

    case 21 :
        printf("\n Affichage   du temps en ordre croissant \n");

        for(i=0;i<max;i++)      //  réalisation du tri par sélection
   {
     for(j=i;j<max;j++)
      {if (tab->temps[i]>tab->temps[j])
         {temps=tab->temps[i];
           tab->temps[i]=tab->temps[j];
            tab->temps[j]=temps;
		 }
	  }
   }
   for(i=0;i<max-1;i++)
   {
       printf(" \n   **\t %d\t** ",tab->temps[i]);
   }


        break;

    case 22 :

    printf(" \nAfficher les donnees du temps en ordre decroissant \n");

    for(i=0;i<max-1;i++)
   {
     for(j=i+1;j<=max-1;j++)
      {if (tab->temps[i]<tab->temps[j])
         {temps=tab->temps[i];
           tab->temps[i]=tab->temps[j];
            tab->temps[j]=temps;
		 }
	  }
   }
   for(i=1;i<max;i++)
   {
       printf(" \n   **\t %d\t** ",tab->temps[i]);
   }

   break;

    case 23 :
        printf("\n Affichage des donnees du pouls en ordre croissant");

        for(i=0;i<max;i++)
   {
     for(j=i;j<max;j++)
      {if (tab->pulse[i]>tab->pulse[j])
         {pulse=tab->pulse[i];
           tab->pulse[i]=tab->pulse[j];
            tab->pulse[j]=pulse;
		 }
	  }
   }
   for(i=1;i<max;i++)
   {
       printf(" \n   **\t %d\t** ",tab->pulse[i]);
   }


        break;

    case 24 :
        printf("\n Afficher les donnees du pouls en ordre decroissant \n");


        for(i=0;i<max-1;i++)
   {
     for(j=i+1;j<=max-1;j++)
      {if (tab->pulse[i]<tab->pulse[j])
         {pulse=tab->pulse[i];
           tab->pulse[i]=tab->pulse[j];
            tab->pulse[j]=pulse;
		 }
	  }
   }
   for(i=01;i<max;i++)
   {
       printf(" \n   **\t %d\t** ",tab->pulse[i]);
   }

    break;


    case 3 :

    printf(" \n     Rechercher et afficher les donnees pour un temps particulier \n\n");

    for(i=0;i<max-1;i++)
    {
        printf("   ** %d \n",tab->temps[i]);

    }
    printf("  \n     entrez un temps  parmi la liste suivante \n  \n ");
    scanf("%d",&temps);
    for(i=0;i<max-1;i++)
    {
        if(temps==tab->temps[i])
        {
            printf("    \n \n le pouls est : %d\n\n",tab->pulse[i]);
        }

    }
    break;

    case 4 :

        printf("\n \n affichage de la moyenne de pouls dans une plage donnee \n\n");

        for(i=0;i<max-1;i++)
    {
        printf("   ** %d \n",tab->temps[i]);

    }
        printf(" entrez deux valeurs du temps pour l'intervalle \n \n  ");
        scanf("%d",&temps);
        scanf("%d",&pulse);


        nbr=0;
        j=0;
        for(i=0;i<max;i++)
        {

        if(tab->temps[i]>=temps )
            {
             nbr=nbr+tab->pulse[i];
             j=j+1;

                if(pulse==tab->temps[i])
                {
                    break;
                }
            }

        }
        b=nbr/j;
        printf("\n\tla moyenne dans [%d,%d] est : %f \n",temps,pulse,b);
        break;

    case 5 :

        printf(" \n le nombre de ligne de donnees actuellemnt en memoire :%d \n",max-1);

        break;

    case 6 :
        nbr=tab->pulse[0];  // tri de recherche
         a=tab->temps[0];
        for(i=1;i<max-1;i++)
        { if(nbr<tab->pulse[i])
          {
              nbr =tab->pulse[i];
              a=tab->temps[i];


          }

        }
        r=tab->pulse[0];
        b=tab->temps[0];

        for(i=1;i<max-1;i++)
        { if(r>tab->pulse[i])
          {
              r =tab->pulse[i];
              j=tab->temps[i];

          }

        }
        printf("\n\tle max de pouls est : %d\tle temps est : %d\n",nbr,a);
        printf("\n\tle min de pouls est : %d\tle temps est : %d\n",r,j);

        break;


   }
}
