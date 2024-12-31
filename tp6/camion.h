#ifndef CAMION_H
#define CAMION_H
#include "Vehicule.h"
#include<bits/stdc++.h>
using namespace std;

class Camion :public Vehicule{
private:
    float chargeMaximale;
public:
    Camion(int annee,float prix,float chargeMaximale)
        : Vehicule(annee,prix),chargeMaximale(chargeMaximale){}
    void accelerer()const override{
        cout<<"je peux atteindre 120km/h"<<endl;
    }
    void afficher() const override{
        Vehicule::afficher();
        cout<<"charge maximale: "<<chargeMaximale<<" tonnes"<<endl;
    }
};

#endif // CAMION_H
