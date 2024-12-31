#include "Piece.h"
#include "Pion.h"
#include "Roi.h"
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<Piece*> pieces;
    pieces.push_back(new Pion("Blanc",1,2));
    pieces.push_back(new Pion("Noir",2,7));
    pieces.push_back(new Roi("Blanc",4,1));
    cout<<"Pieces sur l'echiquier:"<<endl;
    for(Piece* piece : pieces){
        piece->afficher();
    }
    cout<<"\nDeplacement des pieces:"<<endl;
    pieces[0]->deplacer(0,1);
    pieces[2]->deplacer(1,1);
    cout<<"Apres deplacement:"<<endl;
    for(Piece* piece:pieces){
        piece->afficher();
    }
    for(Piece* piece:pieces){
        delete piece;
    }
    return 0;
}

