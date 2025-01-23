#include <bits/stdc++.h>
using namespace std;

class personne{
    private:
    string nom;
    int age;
    string adresse;
    public:
    personne(){
        nom="NA";
        age=0;
        adresse="NA";
    }
    personne(string esm){
        nom=esm;
        age=0;
        adresse="NA";
    }
    personne(string esm,int omr){
        nom=esm;
        age=omr;
        adresse="NA";
    }
    personne(string esm,int omr,string add){
        nom=esm;
        age=omr;
        adresse=add;
    }
    ~personne(){}
    void affiche_nom(){cout<<"le nom est"<<" "<<nom<<endl;}
    void affiche_age(){cout<<"age est"<<" "<<age<<endl;}
    void affiche_adrress(){cout<<"adress est"<<" "<<adresse<<endl;}
};

int main(){
    personne p,p1("anas"),p2("anas",21),p3("anas",21,"turki");
    p1.affiche_nom();
    p1.affiche_age();
    p1.affiche_adrress();
    p2.affiche_nom();
    p2.affiche_age();
    p2.affiche_adrress();
    p3.affiche_nom();
    p3.affiche_age();
    p3.affiche_adrress();
}