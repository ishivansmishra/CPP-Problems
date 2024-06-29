#include<iostream>

using namespace std;

int multiple(int a,int b){
    int c = a*b;
        return c;
}

int main () {
    int a,b;
    cout<< "Enter THe the Value of A : ";
      cin>>a;
    cout<<"Enter The Value of B : ";
    cin>>b;
    cout<<"The multiple of A + b is : "<<multiple(a,b);

    return 0;
}
