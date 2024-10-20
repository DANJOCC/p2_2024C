#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

struct people
{
  char name[100];
  int ced;
  float weight;
};


int main(){
   
    people x;
    fstream FILE("./archivo.bin",ios::in| ios::binary);

    FILE.seekg( sizeof(people) * 2 , ios::beg );

    cout<<FILE.tellg()<<endl;
    
    FILE.read(reinterpret_cast<char *>(&x), sizeof(people));

   cout<<x.name<<" "<<x.weight<<endl;
    
   
    FILE.close();
    return 0;
}