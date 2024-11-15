#include<iostream>

using namespace std;


float sum(int,int);
float sum(int,int,int,int);
float sum(int, float, float,float);

//Definicion e implementacion
void doSomething(){
    cout<<"I do something"<<endl;
}

int main()
{
 
  cout<<sum(2,3)<<endl;
  cout<<sum(2,4,5,4)<<endl;
  cout<<sum(2.3,1, 5.3, 6.7)<<endl;

    return 0;
}

float sum(int a, int b){
    return a+b;
}

float sum(int a, int b, int c, int d){
    return a+b+c+d;
}

float sum(int a, float b, float c, float d){
    return a+b+c;
}