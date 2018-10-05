
#ifndef __MAILLON_H
#define __MAILLON_H

#include <iostream>

using namespace std;

// Classe T
class T {
};

// Classe maillon
//template <class T>
class maillon {
      // Champs prives
      private:
        T _data ;
        maillon *_suivant ;

      // Forme canonique de Coplien
      public:
        maillon();
        maillon(const maillon& m);
        ~maillon();
        maillon& operator=(const maillon& m);

      // Autres methodes et operateurs
      // ...

      // getters
      T getData();
      maillon* getSuivant();

      // setters
      void setData(T data);
      void setSuivant(maillon* m);
};

#endif
