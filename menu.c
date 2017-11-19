#include <stdio.h>
#include <stdlib.h>
int menu()
{
     int choix;
      // affichage du menu

	do {
	 	printf("        ~~~~ Entrez votre choix : ~~~~   \n \n");
        printf ("    1 - Afficher les donnees dans l'ordre du fichier .csv \n\n");
        printf ("    2 - \n        2.1 Afficher les donnees du temps en ordre croissant  \n\n        2.2 Afficher les donnees du temps en ordre décroissant    \n\n");
        printf ("        2.3 Afficher les donnees du pouls en ordre croissant  \n\n        2.4 Afficher les donnees du pouls en ordre décroissant  \n\n");
        printf ("    3 - Rechercher et afficher les donnees pour un temps particulier\n\n");
        printf ("    4 - Afficher la moyenne de pouls dans une plage de temps donnée\n\n");
        printf ("    5 - Afficher le nombre de lignes de donnees actuellement en mémoire\n\n");
        printf ("    6 - Rechercher et afficher les max/min de pouls (avec leurs temps associé)\n\n");
        printf ("    7 - Quitter l'application\n");

        printf("\n\n");
        scanf("%d",&choix); // lecteur de choix

                                  //répeter l'action jusqu'a la condition ne sera pas verfie
	 } while(!((choix>=1 && choix <=7) ||( choix>=21 && choix<=24)));
	return choix;

}
