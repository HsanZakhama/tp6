#ifndef ENSEIGNANT_H
#define ENSEIGNANT_H

#include "Personne.h"
#include<bits/stdc++.h>
using namespace std;

class Enseignant : virtual public Personne
{
private:
    int charge;
public:
    Enseignant(string nom,int age,string sexe,int charge): Personne(nom, age, sexe), charge(charge) {}
    string getPersonne() const override{
        return Personne::getPersonne()+", Charge: "+to_string(charge)+" heures";
    }
};

#endif // ENSEIGNANT_H
