#include "../headers/utile.h"

using namespace std;

void affiche(const int &tour)
{
  cout<<"";
  switch(tour)
  {
    case 1:
      cout<<"=============================\n\tPREFLOP\n=============================\n";
      break;
    case 2:
      cout<<"=============================\n\tFLOP\n=============================\n";
      break;
    case 3:
      cout<<"=============================\n\tTURN\n=============================\n";
      break;
    case 4:
      cout<<"=============================\n\tRIVER\n=============================\n";
      break;
    default: exit(-1);
  }
}
