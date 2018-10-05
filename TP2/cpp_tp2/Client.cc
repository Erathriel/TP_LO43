#include <iostream>
#include <string>

// Include de l'application
#include "Liste.h"
#include "Maillon.h"

//#include "ListeTemplate.h"

int main(int argc, char *argv[])
{
  cout << " LO43 - TP2 - Exo 1" << endl << endl;

  // Test de Liste et ListeTemplate
  //maillon<int> m1;
  //liste<int> l;
  //l.setNbMaillon(9); //--test
  //cout << l.getNbMaillon(); //--test
  //l.affiche();

  liste<int> l;
  maillon<int> m;
  l=l+1;
  int i = l.getTete()->getData();
  m.setData(1);
  cout << m.getData();
  cout << "\n";
  cout << i;
  cout << "\n";
}


