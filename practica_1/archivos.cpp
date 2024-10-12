#include<iostream>
#include<fstream>

using namespace std;

int main(){

    int x=0;
    int data;
    ofstream output("./data/data.txt");
    
    if( !output.is_open()){
        cout<<"No se puede abrir ni crear el archivo"<<endl;
        return 0;
    }

    cout<<"Cuantos datos va a ingresa?"<<endl;
    cin>>x;
   
    

    while(x>0){
        cout<<"ingrese un numero entero"<<endl;
        cin>>data;
        output<<data<<endl;
        x--;
    }

    output.close();


    return 0;
}