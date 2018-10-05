#include "Maillon.h"

// constructeur
maillon::maillon(){}
maillon::maillon(const maillon& m){
	this->_data=m._data;
	this->_suivant=m._suivant;
}

//destructeur
maillon::~maillon(){}

// affectation maillon
maillon& maillon::operator=(const maillon& m){

}

// getters
T maillon::getData(){
	return _data;
}
maillon* maillon::getSuivant(){
	return _suivant;
}

// setters
void maillon::setData(T data){
	_data=data;
}
void maillon::setSuivant(maillon* m){
	_suivant=m;
}