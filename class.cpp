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
class point{
    private:
    float x;
    float y;

    public:
    void init(float abs ,float ord){x=abs;y=ord;}
    void translater(float dx,float dy){x=x+dx;y=y+dy;}
    void print(){
        cout<<"Les coordonnes du point sont "<<x<<" "<<y<<endl;
    }

};

void rec(){
    rectangle r;
    r.set_h(5.5);
    r.set_l(8.0);
    cout<<"la surface est "<<r.surface()<<endl;
    cout<<"le perimetre est"<<r.perimetre();

}
void poin(){
    point p1;
    p1.init(2.5,7.5);
    p1.print();
    p1.translater(2,2);
    p1.print();
}
int main(){
    int x;
    cout<<"choose the class you want to work with"<<endl<<"0 for rec and 1 for point";
    cin>>x;
    if(x==0){
        rec();
    }
    else{
        poin();
    }
}