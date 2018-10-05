#include "Maillon.h"

// constructeur
maillon::maillon(){}
maillon::maillon(const maillon<T>& m){
	this->_data=m._data;
	this->_suivant=m._suivant;
}

//destructeur
maillon::~maillon(){}

// affectation maillon
maillon<T>& maillon::operator=(const maillon<T>& m){

}

// getters
T maillon::getData(){
	return _data;
}
maillon<T>* maillon::getSuivant(){
	return _suivant;
}

// setters
void maillon::setData(T data){
	_data=data;
}
void maillon::setSuivant(maillon<T>* m){
	_suivant=m;
}