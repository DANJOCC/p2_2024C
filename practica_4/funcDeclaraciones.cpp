#include<iostream>

using namespace std;

//Prototipo/Definicion
void doSomethingElse();


//Definicion e implementacion
void doSomething(){
    cout<<"I do something"<<endl;
}

int main()
{
 
    doSomething();
    cout<<endl;
    doSomethingElse();
    cout<<endl;
    doSomething();

    return 0;
}

//Implementacion
void doSomethingElse(){
    doSomething();
    cout<<"I do something else"<<endl;
}