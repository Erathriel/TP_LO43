#include "Liste.h"
#include <string>


// constructeur
liste::liste(){}
liste::liste(const liste<T>& l){
	this->_tete=l._tete;
	this->_fin=l._fin;
	this->nbMaillon=l.nbMaillon;
}

// destructeur
liste::~liste(){}

// affectation liste
liste<T>& liste::operator=(const liste<T>& l){

}

// ajout maillon
liste<T>& liste::operator+(const T& t){
	if (nbMaillon==0)
	{
		nbMaillon++;
		this->_tete=t;
	}
	return *this;
}
liste<T>& liste::operator+(const maillon<T>& m){
	
}
liste<T>& liste::operator+(const liste<T>& l){
	
}

// suppression maillon
liste<T>& liste::operator-(const T&t){

}
liste<T>& liste::operator-(int i){

}

// operateur []
liste<T>& liste::operator[](int i){
	if (i>=0 && i <this->nbMaillon)
	{
		return this[i];
	}
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
maillon<T>* liste::getTete(){
	return _tete;
}
maillon<T>* liste::getFin(){
	return _fin;
}

// setters
void liste::setNbMaillon(int nb){
	nbMaillon = nb;
}
void liste::setTete(maillon<T>* tete){
	_tete=tete;
}
void liste::setFin(maillon<T>* fin){
	_fin=fin;
}