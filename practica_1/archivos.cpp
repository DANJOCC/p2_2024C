#include<iostream>
#include<fstream>

using namespace std;
struct Person {
    string name;
    int ced;
    string email;
};


int main(){

    Person person;
    int x=0;
    ofstream output("./data/data.txt");
    
    if( !output.is_open()){
        cout<<"No se puede abrir ni crear el archivo"<<endl;
        return 0;
    }

    cout<<"Cuantos personas va a ingresar?"<<endl;
    cin>>x;
   
    
    int flag = x;
    while(x>0){
        cout<<"ingrese nombre de la persona N "<<flag-x+1<<endl;
        cin>>person.name;
        cout<<"ingrese la cedula "<<endl;
        cin>>person.ced;
        cout<<"ingrese el email"<<endl;
        cin>>person.email;

        output<<person.name<<"\t"<<person.ced<<"\t"<<person.email<<endl;
        x--;
    }

    output.close();


    return 0;
}