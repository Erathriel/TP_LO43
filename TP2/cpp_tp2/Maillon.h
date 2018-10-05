
#ifndef __MAILLON_H
#define __MAILLON_H

#include <iostream>

using namespace std;

// Classe maillon
template <class T>
class maillon {
      // Champs prives
      private:
        T _data ;
        maillon<T>* _suivant ;

      // Forme canonique de Coplien
      public:
        maillon();
        maillon(const maillon<T>& m);
        ~maillon();
        maillon<T>& operator=(const maillon<T> m);

      // Autres methodes et operateurs
      // ...

      // getters
      T getData();
      maillon<T>* getSuivant();

      // setters
      void setData(T data);
      void setSuivant(maillon<T>* m);
};

#endif
