#include <bits/stdc++.h>
using namespace std ;

class rectangle{
    private:
    double hauteur;
    double largeur;
    public:
    void set_h(double h){hauteur=h;}
    void set_l(double l){largeur=l;}
    double surface(){return(largeur*hauteur);}
    double perimetre(){return 2*(largeur+hauteur);}
};

int main(){
    rectangle r;
    r.set_h(5.5);
    r.set_l(8.0);
    cout<<"la surface est "<<r.surface()<<endl;
    cout<<"le perimetre est"<<r.perimetre();

}