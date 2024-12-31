#include "Voiture.h"
#include "Camion.h"
#include<bits/stdc++.h>
using namespace std;
int main(){
    Voiture voiture1(2022,50000,5);
    cout<<"informations sur la voiture:"<<endl;
    voiture1.afficher();
    voiture1.accelerer();
    Camion camion1(2021,80000,15);
    cout<<"\ninformations sur le camion:"<<endl;
    camion1.afficher();
    camion1.accelerer();
    return 0;
}
