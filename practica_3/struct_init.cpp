#include<iostream>
#include<cstring>
using namespace std;

struct People{
    int ced;
    string name;
    char telf[20];
};


int main(){

   //Inicializacion de una estructura del tipo People

    People p = {27998876,"daniel","+584126757568"};


    cout<<p.ced<<endl;
    cout<<p.name<<endl;
    cout<<p.telf<<endl;

    //cambiar valores con constantes;

    p = {2799886,"daniel","+584126757568"};

    cout<<endl;
    cout<<p.ced<<endl;
    cout<<p.name<<endl;
    cout<<p.telf<<endl;


    //Cambiar valores con variables

    int ced = 123123123;

    string str ="felipe";

    p = {ced,str,"+584126757568"};

    cout<<endl;
    cout<<p.ced<<endl;
    cout<<p.name<<endl;
    cout<<p.telf<<endl;


    //Cambiar valores solo dando alguno de los valores

    ced = 1;

    p = {ced};


    cout<<endl;
    cout<<p.ced<<endl;
    cout<<p.name<<endl;
    cout<<p.telf<<endl;

    //Cambiar valores accediendo a sus atributos

    p.ced = 277;
    p.name = "Daniel";
    strcpy(p.telf,"+5823423");      // p.telf = "+5823423"; la asignaciones de esta manera aun arreglo char
                                    // solo es posible al iniciar una estructura
   

    cout<<p.ced<<endl;
    cout<<p.name<<endl;
    cout<<p.telf<<endl;

    return 0;
}