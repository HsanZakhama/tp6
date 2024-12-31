#include "Robot.h"
#include "RobotChasseur.h"
#include<bits/stdc++.h>
using namespace std;
int main(){
    RobotChasseur RC1("Optimus",2.0,3.0,25.0);
    RC1.deplacer(35.0,22.0);
    RC1.afficher();
    vector<Robot> robots = {
        Robot("Robot1", 10, 10, 15),
        Robot("Robot2", 20, 20, 15),
        Robot("Robot3", 30, 30, 15),
        Robot("Robot4", 40, 40, 15),
        Robot("Robot5", 50, 50, 15)
    };
    for(auto r=robots.begin();r!=robots.end();r++){
        if(RC1.estALaPortee(r)){
            tuer(r);
        }
    }

    return 0;
}
