#include<iostream>

using namespace std;

typedef struct employee {
    string name;
    int id;
    int no;
    string address;
}emp;

int main () {
    emp e1;
    cout<<"Enter The Name of Employee 1 : "<<endl;
    getline(cin,e1.name);

    cout<<"Enter The Id of Employee 1 : "<<endl;
    cin>>e1.id;

    cout<<"Enter The Number Of Employee 1 : "<<endl;
    cin>>e1.no;
    
    cin.ignore();

    cout<<"Enter The Adress of Employee 1 : "<<endl;
    getline(cin,e1.address);

    cout<<"Details of Employee 1 is  "<<e1.name<<" "<<e1.id<<" "<<e1.no<<" "<<e1.address;

    return 0;
}

