#ifndef VECTEUR_H
#define VECTEUR_H

#include <iostream>

using namespace std;

//
// Type Vecteur de float
//
class Vecteur
{
private:
	int _taille ;
	float *_tab ;

public:

  // Constructeurs : par defaut(void) , avec la taille du vect.(int), par copie(Vecteur&)
  Vecteur() : _taille(0), _tab(NULL) {};
	
	// Destructeur
  ~Vecteur(); 
  	
	// Methode d'affichage des elements du Vecteur 
  void affichage(); 	
  
  // Methode d'acces a la taille du Vecteur : "int Taille()"
  int taille();

  // Methode d'acces a l'element : operator[](int)
  float& operator[](int); 

  // Methodes d'affectation :  =(Vecteur&), =(int)
  Vecteur& operator=(Vecteur &v);
  
  // Methodes d'incrementation/decr. (prefix/postfix) : ++(), ++(int), --, --
  Vecteur& operator++();
  
  // Methodes d'operateurs booleens : ==(Vecteur&), <, >, <=, >=
  bool operator==(Vecteur &v);

  // Methodes d'operateurs binaires : +(Vecteur&), -
  Vecteur operator+(Vecteur &v) const;

  // Methode de produit scalaire : *(Vecteur&)
  float operator*(Vecteur &v) const;
  
  // Methode de multiplication avec scalaire : operator*(float);  friend ... operator*(float, Vecteur&);
  Vecteur operator*(float f) const;
  friend Vecteur operator*(float f, const Vecteur &v );
  
  // Methodes d'auto-addition : +=(Vecteur&), -=
  Vecteur& operator+=(Vecteur & v);
 
  // Methodes d'operateurs >> et <<( entree / sortie )
  friend ostream & operator<<(ostream &o, const Vecteur &v);
  friend istream & operator>>(istream &i, Vecteur &v);

};

#endif // VECTEUR_H
