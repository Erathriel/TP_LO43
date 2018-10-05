#include "Maillon.h"

// constructeur
template <class T>
maillon<T>::maillon(){}
template <class T>
maillon<T>::maillon(const maillon<T>& m){
	this->_data=m._data;
	this->_suivant=m._suivant;
}

//destructeur
template <class T>
maillon<T>::~maillon(){}

// affectation maillon
template <class T>
maillon<T>& maillon<T>::operator=(const maillon<T>& m){

}

// getters
template <class T>
T maillon<T>::getData(){
	return _data;
}
template <class T>
maillon<T>* maillon<T>::getSuivant(){
	return _suivant;
}

// setters
template <class T>
void maillon<T>::setData(T data){
	_data=data;
}
template <class T>
void maillon<T>::setSuivant(maillon<T>* m){
	_suivant=m;
}