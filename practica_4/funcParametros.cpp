#include<iostream>

using namespace std;

struct Person{
    string name;
    int age;
    bool pass;
};

int sumTwoNumbers(int,int);

float divideTwoNumbers(float a,float b=1.0){
 if(b == 0){
        return a/1.0;
    }
    return a/b;
}

float sumAllNumbers(float[],int);

Person isOver18(Person);

int main()
{
    Person per = {"Daniel", 23, false};

    cout<<per.pass<<endl;
    cout<<endl;
    per = isOver18(per);
    cout<<per.pass<<endl;
    cout<<endl;
    cout<<isOver18(per).age<<endl;
    return 0;
}


int sumTwoNumbers(int a, int b){
    return a+b;
}

float sumAllNumbers(float array[],int n){
    float sum = 0.0;

    for (int i = 0; i < n; i++)
    {
        sum+=array[i];
    }
    
    return sum;
}

Person isOver18(Person p){
   
   p.pass = p.age > 18;

    return p;
}