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
        Polygone<T> forme;
        int pConstructible;

    public:
        parcelle(int num, string prop, Polygone<T> forme);
        //parcelle(parcelle parc);
        int getNumero();
        string getProprietaire( );
        float getSurface( );
        Polygone<T> getForme( );
        string getType( ); 
        void setNumero(int n);
        void setProprietaire(string prop );
        void setForme(Polygone<T> forme);
        void setType(string type);

};

template<typename T>
parcelle<T>::parcelle(int num, string prop, Polygone<T> forme){
    this->setForme(forme);
    this->setNumero(num);
    this->setProprietaire(prop);
}

template<typename T>
int parcelle<T>::getNumero(){
    return this->numero;
}

template<typename T>
string parcelle<T>::getProprietaire( ){
    return this->proprietaire;
}

template<typename T>
float parcelle<T>::getSurface(){

    vector<point2D<int>>::iterator it;

    int x = 0;
    int y = 0;
    int x_plus_1 = 0;
    int y_plus_1 = 0;

    float result_somme = 0;
    
    
    for (int i=0;i< this->forme.getSommets().size()-1;i++){
        x = this->forme.getSommets()[i].getX();
        y = this->forme.getSommets()[i].getY();
        x_plus_1 = this->forme.getSommets()[i+1].getX();
        y_plus_1 = this->forme.getSommets()[i+1].getY();

        printf("\nx = %d\n",x);
        printf("y = %d\n",y);
        printf("x+1 = %d\n",x_plus_1);
        printf("y+1 = %d\n",y_plus_1);

        result_somme += (x_plus_1*y - x*y_plus_1); 

        printf("sum = %f\n",result_somme);


        //printf(result_somme);
    }
    this->surface = 0.5*(result_somme);

    return this->surface;
}

template<typename T>
Polygone<T> parcelle<T>::getForme( ){
    return this->forme;
}

template<typename T>
string parcelle<T>::getType( ){
    return this->type;
}

template<typename T>
void parcelle<T>::setNumero(int n){
    this->numero = n;
}

template<typename T>
void parcelle<T>::setProprietaire(string prop ){
    this->proprietaire = prop;
}

template<typename T>
void parcelle<T>::setForme(Polygone<T> forme){
    this->forme = forme;
}

template<typename T>
void parcelle<T>::setType(string type){
    this->type = type;
}

template<typename T>
inline ostream& operator<<(ostream& s, parcelle<T> p)
{
	s << "Parcelle n° : " << p.getNumero() << endl;
    s << "  Type : " << p.getType() << endl;
    s << "  Polygone : " << p.getForme() << endl;
    s << "  Proprietaire : " << p.getProprietaire() << endl;
    s << "  Surface : " << p.getSurface() << endl;
    //constructible
    //surface construite
    //surface a construire restante

	return s;
}