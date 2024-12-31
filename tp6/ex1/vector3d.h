#ifndef VECTOR3D_H
#define VECTOR3D_H

#include "Vecteur.cpp"


class Vector3D : public Vecteur
{
    public:
        double getx(){
            return x;
        }
        double gety(){
            return y;
        }
        double getz(){
            return z;
        }
        vector3d(){
            Vecteur();
            this->z=0;
        }
        vector3d(double x, double y, double z) {
            Vecteur(x,y);
            this->z=z;
        }
        void afficher()const{
            cout<<"("<<this->x<< ", "<<this->y<<", "<<this->z<<")"<<endl;
        }
        void deplacer(double dx,double dy,double dz){
            x+=dx;
            y+=dy;
            z+=dz;
        }

    protected:

    private:
        double z;
};

#endif // VECTOR3D_H
