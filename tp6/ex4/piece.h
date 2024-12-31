#ifndef PIECE_H
#define PIECE_H
#include<bits/stdc++.h>
using namespace std;

class Piece{
public:
    Piece(string couleur,int x,int y): couleur(couleur),x(x),y(y){}
    virtual void deplacer(int dx, int dy)=0;
    virtual void afficher()const{
        cout<<"piece de couleur: "<<couleur<<", position: ("<<x<<", "<<y<<")"<<endl;
    }
    virtual ~Piece(){}
protected:
    string couleur;
    int x,y;
};

#endif // PIECE_H
