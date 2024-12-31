#ifndef VOITURE_H
#define VOITURE_H
#include<bits/stdc++.h>
#include "Vehicule.h"
using namespace std;

int Vehicule::compteurSerie = 0;

class Voiture: public Vehicule{
private:
    int nombrePlaces;
public:
    Voiture(int annee,float prix,int nombrePlaces)
        : Vehicule(annee,prix),nombrePlaces(nombrePlaces){}
    void accelerer() const override{
        cout<<"je peux atteindre 200km/h"<<endl;
    }
    void afficher() const override{
        Vehicule::afficher();
        cout<<"nombre de places: "<<nombrePlaces<<endl;
    }
};

#endif // VOITURE_H
