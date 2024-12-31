#ifndef ROBOTCHASSEUR_H
#define ROBOTCHASSEUR_H
#include <bits/stdc++.h>
#include "Robot.h"
using namespace std;

class RobotChasseur:public Robot{
public:
    RobotChasseur(string nom,double x,double y,double portee,bool statut=false):Robot(nom, x, y, portee, statut) {}
    float distance(const Robot& autre) const{
        return sqrt(pow(x-autre.getx(),2)+pow(y-autre.gety(),2));
    }
    bool estALaPortee(const Robot& autre) const{
        return distance(autre)<=portee;
    }
    void tuer(Robot& autre){
        autre.tuer();
        cout << "Le robot " << autre.getnom() << " est mort." << endl;
    }
};

#endif // ROBOTCHASSEUR_H
