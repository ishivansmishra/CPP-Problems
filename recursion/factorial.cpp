#include<iostream>

using namespace std;

int fact (int n ){
    if(n == 0 || n==1){
        return 1;
    }
    return n * fact(n-1);
}

int main () {
    int n;
    cout<<"Enter The Number : "<<endl;
    cin>>n;
    cout<<"The Factorial of "<<n<<" is "<<fact(n);


    return 0;
}