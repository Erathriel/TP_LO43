#include "Maillon.h"


#ifndef __LISTE_H
#define __LISTE_H

// Classe liste
class liste {
      // Champs prives
      private:
      maillon *_tete, *_fin;

      // Forme canonique de Coplien
      public:
        liste() ;
        liste(const liste& l) ;
        ~liste() ;
        liste& operator=(const liste& l) ;

      // Ajout de maillons
         liste& operator+ (const T& t) ;
         liste& operator+ (const maillon& m) ;
         liste& operator+ (const liste& l) ;

      // Suppression de maillons
         liste& operator- (const T&t ) ; // suppression de la premiere occurence de T
         liste& operator- (int i) ; // suppression du maillon d'indice donne

      // Suppression 
         void supprime_tete() ; // supprime la tete de la liste
         void supprime() ; // supprime tous les elements de la liste

      

      // Entrees-sorties
         void affiche () const ; // Fonction constante qui ne peut pas modifier les champs de la classe

      // Autres methodes et operateurs
      // ...
};        

#endif
