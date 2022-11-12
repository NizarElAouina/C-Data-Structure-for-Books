#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Livre
{
    char titre[30];
    int quantite;
}livre;
typedef struct Cellule
{
    livre data;
    struct Cellule *suiv;
}cellule;
cellule * AjouterLivre(cellule *,livre );
void AfficherLivreT(cellule *);
void AfficherLivreQ(cellule *,int);
cellule * SupprimerLivre(cellule *,char);
cellule * SupprimerVide(cellule * );
void calculerVide(cellule *);
void nombreLivre(cellule *);


#endif // HEADER_H_INCLUDED
