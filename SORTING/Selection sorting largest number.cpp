#include<iostream>

using namespace std;

int main (){
  int n;
  cout<<"Enter The size : ";
  cin>>n;

  int arr[100];
  cout<<"Enter the elment : ";
  for(int i = 0;i<n;i++){
    cin>>arr[i];
  }

  for(int i = n;i>=0;i--){
    int index = i;
    for(int j = i-1;j>=0;j--){
      if(arr[j]>arr[index]){
        index = j;
      }
    }
    swap(arr[i],arr[index]);
  }
  for(int i = 0;i<n;i++){
    cout<<arr[i]<<" ";
  }


  return 0;
}