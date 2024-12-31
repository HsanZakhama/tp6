#ifndef ROI_H
#define ROI_H

#include "Piece.h"
#include<bits/stdc++.h>
using namespace std;

class Roi : public Piece{
    public:
        Roi(string couleur,int x,int y):Piece(couleur,x,y){}
        void deplacer(int dx,int dy)override{
            if(abs(dx)>1 || abs(dy)>1){
                cout<<"deplacement invalide pour un roi."<<endl;
                return;
            }
            x+=dx;
            y+=dy;
        }
    void afficher()const override{
        cout<<"Roi ";
        Piece::afficher();
    }
};

#endif // ROI_H
