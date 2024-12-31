#ifndef PION_H
#define PION_H

#include "Piece.h"
#include<bits/stdc++.h>
using namespace std;

class Pion : public Piece{
    public:
        Pion(string couleur,int x,int y):Piece(couleur,x,y){}
        void deplacer(int dx, int dy) override{
        if(dy!=1){
            cout<<"deplacement invalide pour un pion."<<endl;
            return;
        }
        y+=dy;
        if(y>8){
            cout<<"le pion a depasse la limite de l'echiquier!"<<endl;
            y=8;
        }
    }

    void afficher()const override{
        cout<<"pion ";
        Piece::afficher();
    }
};

#endif // PION_H
