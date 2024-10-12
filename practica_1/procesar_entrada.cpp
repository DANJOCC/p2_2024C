#include<iostream>
#include<fstream>

using namespace std;

int main(){

    int x=0;
    string data;
    ifstream input("./data/data.txt");
    
    if( !input.is_open()){
        cout<<"No se puede abrir"<<endl;
        return 0;
    }


    while(input>>data){ 
        for(int i = 0; i<3; i++){
            

            switch (i){
                case 0:
                    cout<<"Mi nombre es "<<data<<", ";
                    break;
                case 1:
                    cout<<"numero de cedula: "<<data<<", ";
                    break;
                default:
                    cout<<"mi correo es: "<<data<<"."<<endl<<endl;
                    continue; // control del ciclo, ignora el resto  y vuelve a la condicion, necesario para evitar repeticiones
            }
            input>>data;
        }
    }

    input.close();


    return 0;
}