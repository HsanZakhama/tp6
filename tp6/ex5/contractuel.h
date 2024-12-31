#ifndef CONTRACTUEL_H
#define CONTRACTUEL_H

#include "Enseignant.h"
#include "Etudiant.h"
#include<bits/stdc++.h>
using namespace std;

class Contractuel : public Enseignant,public Etudiant
{
public:
    Contractuel(string nom,int age,string sexe,int charge,string filiere):Personne(nom, age, sexe), Enseignant(nom, age, sexe, charge), Etudiant(nom, age, sexe, filiere) {}
    string getPersonne() const override{
        return Enseignant::getPersonne()+", "+Etudiant::getPersonne();
    }
};

#endif // CONTRACTUEL_H
