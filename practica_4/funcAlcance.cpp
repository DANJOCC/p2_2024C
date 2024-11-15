#include<iostream>

using namespace std;


int sum(int, int);
int sumRef(int&, int);
int sum(int, int,int);
int a = 5; //global

int main()
{
    int a = 3 ; // es local de main
    cout<<sum(a,4);
    cout<<endl;
    cout<<a;
     cout<<endl;
    cout<<a;
    cout<<sum(3,4,2);
    cout<<endl;
    cout<<sumRef(a,4);
     cout<<endl;
    cout<<a;

    
    return 0;
}

int sum(int a, int b){ //a es local
    a = a + 1;
    return a+b;
};
int sumRef(int& a, int b){// a es local, pero es una referencia
    a = a + 1;
    return a+b;
}
int sum(int b, int c, int d){//a es la variable global definida anteriormente
    return a+b+c+d;
};
