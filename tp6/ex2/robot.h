#ifndef ROBOT_H
#define ROBOT_H
#include <bits/stdc++.h>
using namespace std;

class Robot{
public:
    Robot(string nom,double x,double y,double portee,bool statut=false):nom(nom),x(x),y(y),portee(portee),statut(statut){}
    double getx() const{ return x; }
    double gety() const{ return y; }
    string getnom() const{ return nom; }
    double getportee() const { return portee; }
    void deplacer(double dx, double dy){
        x+=dx;
        y+=dy;
    }
    void afficher() const{
        cout<<"Le nom du robot est "<<nom<<endl;
        cout<<"La position du robot est ("<<x<<", "<<y<<")"<<endl;
        cout<<"Son portee est "<<portee<<". "<<(statut ? "Le robot est mort":"Le robot est vivant")<<endl;
    }
    void tuer(){ statut = true;}
    bool estEnVie() const { return !statut;}
protected:
    string nom;
    double x, y;
    double portee;
    bool statut;
};

#endif // ROBOT_H
