#include "header.h"

//ajouter selon la quantite en tail et head
cellule * AjouterLivre(cellule *L,livre v)
{
   cellule *nouv=NULL,*p=NULL;
   nouv=(cellule *)malloc(sizeof(cellule));
   nouv->data=v;
   nouv->suiv=NULL;
   if(L==NULL)
   {
       L=nouv;
   }
   else
   {
       if(v.quantite<=0)
       {
           //insert in head
           nouv->suiv=L;
           L=nouv;
       }
       else
       {
           //insert in in tail
           p=L;
           while(p->suiv!=NULL)
           {
               p=p->suiv;
           }
           p->suiv=nouv;
       }
   }
   return L;
}

//afficher toutr la liste des livres
void AfficherLivreT(cellule *L)
{
    cellule *p=NULL;
   p=L;
   if(L==NULL)
   {
       printf("la liste des livres est vide");
   }
   else
   {
       while(p!=NULL)
       {
           printf("%s | %d\n",p->data.titre,p->data.quantite);
           p=p->suiv;
       }
   }
}
//afficher que les livres qui ont une quantite egale a N
void AfficherLivreQ(cellule *L,int N)
{
    cellule *p=NULL;
    p=L;
    while(p!=NULL)
    {
        if(p->data.quantite==N)
        {
            printf("%s | %d\n",p->data.titre,p->data.quantite);
        }
        p=p->suiv;
    }

}

cellule * SupprimerLivre(cellule *L,char t)
{
    cellule *Ap=NULL,*Av=NULL;
    int i,d;
    Av=L;
    Ap=L;
    while(Ap!=NULL)
    {
        Av=Ap;
        Ap=Ap->suiv;
    }
     for(i=0;i<strlen(t);i++)
        {
            if(t[i]=Ap->data.titre[i])
            {
                d++;
            }
        }
    if(d==strln(t))
    {
        free(Ap);
        Av->suiv=Ap->suiv;
    }
    return L;
}

cellule * SupprimerVide(cellule * L)
{
    cellule *Ap=NULL,*Av=NULL;
    Ap=L;
    Av=L;
    if(L->data.quantite==0)
    {
        free(L);
        L=L->suiv;
    }
    else
    {

       while(Ap!=NULL)
        {
             Ap=Ap->suiv;
            if(Ap->data.quantite==0)
            {
                free(Ap);
                Av->suiv=Ap->suiv;
            }
        }
        Av->suiv=NULL;

    }

    return L;
}

//calculer le nombre de livre qui sont vides
void calculerVide(cellule *L)
{
    cellule *p=NULL;
    int d=0;
    p=L;
    while(p->suiv!=NULL)
    {
        if(p->data.quantite==0)
        {
          d++;
        }
        p=p->suiv;
    }
    printf("le nombre des livres vides est %d",d);
}
//calculer le nombre de livre
void nombreLivre(cellule *L)
{
    cellule *p=NULL;
    int d=0;
    p=L;
    while(p!=NULL)
    {
        p=p->suiv;
        d++;
    }
    printf("le nombre de livre est %d",d);
}
