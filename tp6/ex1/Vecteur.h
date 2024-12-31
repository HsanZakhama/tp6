#ifndef VECTEUR_H
#define VECTEUR_H
#include<bits/stdc++.h>
using namespace std;

class Vecteur
{
    public:
        double getx(){
            return x;
        }
        double gety(){
            return y;
        }

        Vecteur();
        Vecteur(double x,double y);
        void afficher();
        void deplacer(double dx, double dy);

    protected:
        double x,y;
    private:

};

#endif // VECTEUR_H
