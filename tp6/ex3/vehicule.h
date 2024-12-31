#ifndef VEHICULE_H
#define VEHICULE_H
#include<bits/stdc++.h>
using namespace std;

class Vehicule{
public:
    Vehicule(int annee,float prix)
        :annee(annee),prix(prix){
        numeroVehicule=++compteurSerie;
        if(numeroVehicule>10000){
            numeroVehicule=1;
            compteurSerie++;
        }
        numeroSerie=compteurSerie;
    }
    virtual void accelerer() const=0;
    virtual void afficher()const{
        cout<<"Matricule: "<<numeroSerie<<" TUN " <<numeroVehicule;
        cout<<", Année: "<<annee <<", Prix: "<< prix <<" TND"<<endl;
    }
    virtual ~Vehicule(){}
protected:
    static int compteurSerie;
    int numeroSerie;
    int numeroVehicule;
    int annee;
    float prix;
private:
};
#endif // VEHICULE_H
