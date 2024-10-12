#include<iostream>
#include<fstream>

using namespace std;

int main(){

    int x=0;
    int data;
    ifstream input("./data/data.txt");
    
    if( !input.is_open()){
        cout<<"No se puede abrir"<<endl;
        return 0;
    }

    while(input>>data){ //pueden utilizar input.eof() o input.good() como condicion del while
        //input>>data;
        cout<<data<<endl;
    }

    input.close();


    return 0;
}