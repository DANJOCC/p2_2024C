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
    people p1;
    people p2;
    people p3;

    strcpy(p1.name, "daniel");
    p1.ced = 124123;
    p1.weight = 123124;

    strcpy(p2.name, "alfonzo");
    p2.ced = 124113;
    p2.weight = 11224;
  
    strcpy(p3.name, "fulano");
    p3.ced = 123;
    p3.weight = 224;

    fstream FILE("./archivo.bin",ios::out| ios::binary);
    
    FILE.write(reinterpret_cast<char *>(&p1), sizeof(people));
   FILE.write(reinterpret_cast<char *>(&p2), sizeof(people));
    FILE.write(reinterpret_cast<char *>(&p3), sizeof(people));
    
    FILE.close();
    return 0;
}
