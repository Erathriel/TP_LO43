#include "Liste.h"
#include <string>


// constructeur
template <class T>
liste<T>::liste(){}
template <class T>
liste<T>::liste(const liste<T>& l){
	this->_tete=l._tete;
	this->_fin=l._fin;
	this->nbMaillon=l.nbMaillon;
}

// destructeur
template <class T>
liste<T>::~liste(){}

// affectation liste
template <class T>
liste<T>& liste<T>::operator=(const liste<T>& l){

}

// ajout maillon
template <class T>
liste<T>& liste<T>::operator+(const T& t){
	if (nbMaillon==0)
	{
		nbMaillon++;
		this->_tete=t;
	}
	return *this;
}
template <class T>
liste<T>& liste<T>::operator+(const maillon<T>& m){
	
}
template <class T>
liste<T>& liste<T>::operator+(const liste<T>& l){
	
}

// suppression maillon
template <class T>
liste<T>& liste<T>::operator-(const T&t){

}
template <class T>
liste<T>& liste<T>::operator-(int i){

}

// operateur []
template <class T>
liste<T>& liste<T>::operator[](int i){
	if (i>=0 && i <this->nbMaillon)
	{
		return this[i];
	}
}

// suppression
template <class T>
void liste<T>::supprime_tete(){

}
template <class T>
void liste<T>::supprime(){

}

// affichage des elements de la liste
template <class T>
void liste<T>::affiche() const{
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
template <class T>
int liste<T>::getNbMaillon(){
	return nbMaillon;
}
template <class T>
maillon<T>* liste<T>::getTete(){
	return _tete;
}
template <class T>
maillon<T>* liste<T>::getFin(){
	return _fin;
}

// setters
template <class T>
void liste<T>::setNbMaillon(int nb){
	nbMaillon = nb;
}
template <class T>
void liste<T>::setTete(maillon<T>* tete){
	_tete=tete;
}
template <class T>
void liste<T>::setFin(maillon<T>* fin){
	_fin=fin;
}