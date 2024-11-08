#include<iostream>
#include <cstring>
using namespace std;

struct People{
    int ced;
    string name;
    char telf[20];

    People(int ced, string name, char telf[]){
        this->ced=ced+1000;
        this->name= name+ " mote: pedrito ";
        strcpy(this->telf, telf);
    };
    

};

int main(){

   //Inicializacion de una estructura del tipo People
   //utilizando un constructor

    char tlf[20] = "+584126757568";
    People p(2799887,"daniel",tlf);
    
    strcpy(tlf,"+58123456789");
    People p2(120000,"edadasd",tlf);

    cout<<p.ced<<endl;
    cout<<p.name<<endl;
    cout<<p.telf<<endl; 
    cout<<endl;
    cout<<p2.ced<<endl;
    cout<<p2.name<<endl;
    cout<<p2.telf<<endl;

    return 0;
}