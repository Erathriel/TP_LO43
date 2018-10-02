#include "Liste.h"
#include <string>

// constructeur
liste::liste(){}
liste::liste(const liste& l){}

// destructeur
liste::~liste(){}

// affectation liste
liste& liste::operator=(const liste& l){

}

// ajout maillon
liste& liste::operator+(const T& t){

}
liste& liste::operator+(const maillon& m){
	
}
liste& liste::operator+(const liste& l){
	
}

// suppression maillon
liste& liste::operator-(const T&t){

}
liste& liste::operator-(int i){

}

// suppression
void liste::supprime_tete(){

}
void liste::supprime(){

}

// affichage des elements de la liste
void liste::affiche() const{
	/*for (maillon m : ma)
	{
		cout << m;
	}*/
	/*string s="Bonjour";
	for (char c : s)
	{
		cout << c;
		cout << "\n";
	}*/
}

