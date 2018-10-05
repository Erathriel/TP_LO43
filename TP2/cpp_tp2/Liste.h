#include "Maillon.h"


#ifndef __LISTE_H
#define __LISTE_H

// Classe liste
template <class T>
class liste {
      // Champs prives
      private:
      maillon<T> *_tete, *_fin;
      int nbMaillon;

      // Forme canonique de Coplien
      public:
        liste() ;
        liste(const liste<T>& l) ;
        ~liste() ;
        liste<T>& operator=(const liste<T>& l) ;

      // Ajout de maillons
         liste<T>& operator+ (const T& t) ;
         liste<T>& operator+ (const maillon<T>& m) ;
         liste<T>& operator+ (const liste<T>& l) ;

      // Suppression de maillons
         liste<T>& operator- (const T&t ) ; // suppression de la premiere occurence de T
         liste<T>& operator- (int i) ; // suppression du maillon d'indice donne

      // Suppression 
         void supprime_tete() ; // supprime la tete de la liste
         void supprime() ; // supprime tous les elements de la liste

      

      // Entrees-sorties
         void affiche () const ; // Fonction constante qui ne peut pas modifier les champs de la classe

      // Autres methodes et operateurs
      // ...

      // operateur []
      liste<T>& operator[]( int i);

      // getters
      int getNbMaillon();
      maillon<T>* getTete();
      maillon<T>* getFin();

      // setters
      void setNbMaillon(int nb);
      void setTete(maillon<T>* tete);
      void setFin(maillon<T>* fin);

};        

#endif
