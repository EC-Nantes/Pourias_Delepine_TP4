#pragma once
#include <string>
#include "polygone.h"
using namespace std;

template<typename T>
class parcelle{
    protected:
        string type;
        int numero;
        string proprietaire;
        float surface;
        Polygone<vector<point2D<int>>> forme;
        int pConstructible;

    public:
        parcelle(int num, string prop, Polygone<vector<point2D<T>>> forme);
        parcelle(parcelle parc);
        int getNumero();
        string getProprietaire( );
        float getSurface( );
        Polygone<vector<point2D<T>>> getForme( );
        string getType( ); 
        void setNumero(int n);
        void setProprietaire(string prop );
        void setForme(Polygone<vector<point2D<T>>> forme);
        void setType(string type);

};

template<typename T>
parcelle<T>::parcelle(int num, string prop, Polygone<vector<point2D<T>>> forme){

}
/*
template<typename T>
parcelle<T>::parcelle(parcelle parc){
}
*/

template<typename T>
int parcelle<T>::getNumero(){
    return this->numero;
}

template<typename T>
string parcelle<T>::getProprietaire( ){
    return this->proprietaire;
}

template<typename T>
float parcelle<T>::getSurface( ){
    return this->surface;
}

template<typename T>
Polygone<vector<point2D<T>>> parcelle<T>::getForme( ){
    return this->forme;
}

template<typename T>
string parcelle<T>::getType( ){
    return this->type;
}

template<typename T>
void parcelle<T>::setNumero(int n){

}

template<typename T>
void parcelle<T>::setProprietaire(string prop ){
    this->proprietaire = prop;
}

template<typename T>
void parcelle<T>::setForme(Polygone<vector<point2D<T>>> forme){
    this->forme = forme;
}

template<typename T>
void parcelle<T>::setType(string type){
    
}