#include <stdio.h>
#include <iostream>
#include "point2d.h"
#include "polygone.h"
#include "ZN.h"
#include "ZA.h"
#include "ZAU.h"
#include "ZU.h"
#include "carte.h"

using namespace std;


int main()
{
    cout << "START CODE"<< endl;
    
    vector<point2D<int>> v_point;
/*
    point2D<int> pt0 (0, 0);
    point2D<int> pt1 (0, 30);
    point2D<int> pt3 (30, 0);
    point2D<int> pt2 (30, 30);
    */
    
    point2D<int> p1;
    point2D<int> p=p1;
    cout<<p<<endl<<endl<<p1;


    Polygone<int> poly; 
    cout<<poly;

    

    poly.translate(5,5);

  cout<<poly;
    
    Polygone<int> poly2=poly;
    cout<<poly2;
  
/*
    v_point.push_back(pt0); //sens trigonometrique pour la formule de surface
    v_point.push_back(pt1);
    v_point.push_back(pt2);
    v_point.push_back(pt3);
    v_point.push_back(pt0_fin);
    
    Polygone<int> pol(v_point); 

   // cout << "Polygone : \n" << pol << endl;

    parcelle<int> parcelle_1(1,"Par_A",pol);

    ZN<int> zn1(1,"propre ZN 1",pol);
    ZA<int> za1(2,"propre ZA 1",pol,"cailloux");
    ZAU<int> zau1(3,"propre ZAU 1",pol,10);
    ZU<int> zu1(4,"propre ZU 1",pol,50,10);

    string valid_ZA = "TU PEUX PAS";
    if(za1.surface_peut_constuctible_mais_pas_trop(110) == true) valid_ZA = "TU PEUX";



    //cout << za1 <<endl;
    
    //cout << zn1 <<endl;
    cout << zau1 <<endl;
    cout << zu1 <<endl;

    cout << "Parcelle numero : " << parcelle_1.getNumero() << endl;
    cout << "Parcelle forme : \n" << parcelle_1.getForme() << endl;
    cout << "Parcelle proprietaire : " << parcelle_1.getProprietaire() << endl;
    cout << "Parcelle surface : " << parcelle_1.getSurface() << " m^2"<<endl;
    cout << "Parcelle Type : " << parcelle_1.getType() << endl;

    cout << endl;
    Carte<int> carte;
    carte.loadCarte("Parcelles.txt");
    carte.afficher();
    carte.save();
*/

    return 0;
}
