#ifndef PERSONNE_H
#define PERSONNE_H
#include<bits/stdc++.h>
using namespace std;

class Personne
{
    public:
        Personne(string nom, int age, string sexe):nom(nom),age(age),sexe(sexe){}
        virtual string getPersonne() const{
        return "Nom: "+nom+", Age: " +to_string(age)+", Sexe: "+sexe;
    }
    virtual ~Personne(){}
    protected:
        string nom;
        int age;
        string sexe;
};

#endif // PERSONNE_H
