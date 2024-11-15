#include<iostream>
#include <cstring>
using namespace std;


struct StructA{
    int x;
    int y;
};

struct StructB{
    int z;
    StructA alpha;
};

struct StructC{
    struct{
        int w;
        int u;
    }sigma;

    StructB beta;
    
    StructC(int w, int u, StructB beta){
        this->sigma.u = u;
        this->sigma.w = w;
        this->beta.z = beta.z;
        this->beta.alpha = beta.alpha;
    }
};


int main(){

    StructB myStruct ={4, { 3 , 5 } };
    StructC myStruct2(4,5, myStruct);
   // StructC myStruct2 = { { 4 , 5 }, { 6, { 1, 2 } } };

    //valores en myStruct 

    cout<<myStruct.z<<endl;
    cout<<myStruct.alpha.x<<endl;
    cout<<myStruct.alpha.y<<endl;

    //Valores en myStruct 2

    cout<<endl;
    cout<<myStruct2.sigma.w<<endl;
    cout<<myStruct2.sigma.u<<endl;
    cout<<myStruct2.beta.z<<endl;
    cout<<myStruct2.beta.alpha.x<<endl;
    cout<<myStruct2.beta.alpha.y<<endl;
    

    return 0;
}
