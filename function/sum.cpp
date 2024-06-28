#include<iostream>

using namespace std;

int sum (int a,int b){
        int c = a+b;
        return c;
}

int main () {
    int a,b;
    cout<< "Enter THe the Value of A : ";
      cin>>a;
    cout<<"Enter The Value of B : ";
    cin>>b;
    cout<<"The Sum of A + b is : "<<sum(a,b);

    return 0;
}