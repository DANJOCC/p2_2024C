#include<iostream>

using namespace std;


int sum(int, int); // paso por parametro
int sumRef(int&, int); //paso por referencia


int main()
{
    int c = 1, d = 2;
    cout<<sum(c,d)<<endl;
    cout<<endl;
    cout<<c<<" "<<d<<endl;
    cout<<sumRef(c,d)<<endl;
    cout<<endl;
    cout<<c<<" "<<d<<endl;
    return 0;
}

int sum(int a, int b){
    a = a + 1;
    return a+b;
};
int sumRef(int& a, int b){
    a = a + 1;
    return a+b;
}
