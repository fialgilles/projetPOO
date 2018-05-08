#include "../headers/utile.h"

using namespace std;

void affiche(const int &tour)
{
  cout<<"";
  switch(tour)
  {
    case 1:
      cout<<"\n=============================\n\tPREFLOP\n=============================\n";
      break;
    case 2:
      cout<<"\n=============================\n\tFLOP\n=============================\n";
      break;
    case 3:
      cout<<"\n=============================\n\tTURN\n=============================\n";
      break;
    case 4:
      cout<<"\n=============================\n\tRIVER\n=============================\n";
      break;
    default: exit(-1);
  }
}

void trieJoueur(Cartes *tab,int nb)
{
  Cartes aux;
  for(int i = nb;i>=0;i--)
  {
    for(int j=0;j<i;j++)
    {
      if(tab[j]>tab[j+1])
      {
        aux = tab[j];
        tab[j]=tab[j+1];
        tab[j+1]=aux;
      }
    }
  }
}
