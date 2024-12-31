#include "Enseignant.h"
#include "Etudiant.h"
#include "Contractuel.h"
#include<bits/stdc++.h>
using namespace std;
int main(){
    Enseignant e1("Hasan",45,"Homme",18);
    Etudiant s1("Aya", 20, "Femme", "Informatique");
    Contractuel c1("Yaakoubi", 30, "Homme", 12, "Mathématiques");
    cout<<"informations des personnes:"<<endl;
    cout<<e1.getPersonne()<<endl;
    cout<<s1.getPersonne()<<endl;
    cout<<c1.getPersonne()<<endl;
    return 0;
}

