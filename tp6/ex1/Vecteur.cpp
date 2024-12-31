#include "Vecteur.h"
#include<bits/stdc++.h>
using namespace std;
Vecteur::Vecteur()
{
    this->x=0;
    this->y=0;
}

Vecteur::Vecteur(double x,double y)
{
    this->x=x;
    this->y=y;
}
void Vecteur::afficher(){
    cout<<"( "<<x<<" ,"<<y<<" )"<<endl;
}
void Vecteur::deplacer(double dx,double dy){
    x+=dx;
    y+=dy;
}
