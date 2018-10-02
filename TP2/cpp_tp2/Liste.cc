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
	/* //--test
	for (maillon m : this)
	{
		cout << m;
	}*/
	//exemple foreach
	/* //--test
	string s="Bonjour";
	for (char c : s)
	{
		cout << c;
		cout << "\n";
	}*/
	/* //--test
	for (int i = 0; i < this->nbMaillon; ++i)
	{
		cout << i;
	}*/
}

// getters
int liste::getNbMaillon(){
	return nbMaillon;
}

// setters
void liste::setNbMaillon(int nb){
	nbMaillon = nb;
}