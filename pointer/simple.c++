#include<iostream>

using namespace std;

int main () {
       
       int a;
       cout<<"Enter The Value : "<<endl;
       cin>>a;

       int *b = &a;

       cout<<"The Address of a is : "<<b<<endl;
       cout<<"The Value of a is  : "<<*b<<endl;
       cout<<"The Address of a is : "<<&a<<endl;


    return 0;
}