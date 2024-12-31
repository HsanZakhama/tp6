#ifndef ETUDIANT_H
#define ETUDIANT_H

#include "Personne.h"
#include<bits/stdc++.h>
using namespace std;

class Etudiant : virtual public Personne
{
private:
    string filiere;
public:
    Etudiant(string nom,int age,string sexe,string filiere): Personne(nom, age, sexe),filiere(filiere){}
    string getPersonne() const override{
        return Personne::getPersonne()+", Filière: "+filiere;
    }
};

#endif // ETUDIANT_H
