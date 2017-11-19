typedef struct donnee donnee ;
struct donnee     // déclaration de la structeur donnee
{
    int pulse[100] ;
    int temps[100] ;
};

int lecteur(donnee *tab); // déclaration de la fonction lecteur
