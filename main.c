#include "header.h"

int main()
{
    int c=1,N;
    cellule *L=NULL;
    livre v;
    char t[20];

    while(c==1)
    {
      printf("entrer le titre de votre livre\n");
      fflush(stdin);
      gets(v.titre);
      printf("entrer le nombre de copie de votre livre\n");
      scanf("%d",&v.quantite);
      L=AjouterLivre(L,v);
      printf("taper 1 si vous voulez ajouter un autre livre\n");
      scanf("%d",&c);


    }
    AfficherLivreT(L);
    printf("----------------------------\n");
    /*L=SupprimerVide(L);
    AfficherLivreT(L);*/

    /*printf("entrer ne nombre de copie du livre que vous souhaitez afficher\n");
    scanf("%d",&N);
    AfficherLivreQ(L,N);*/

    printf("entrer le titre du livre que vous souhaitez supprimer\n");
    gets(t);
    AfficherLivre(L,t);


    /*nombreLivre(L);
    printf("\n");
    calculerVide(L);*/

    return 0;
}
