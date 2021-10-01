#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of elements: ";
  cin>>n;
  cout<<"Enter the elements in the sorted order: ";
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int d;
  cout<<"Enter the element to search: ";
  cin>>d;
  int x,i;
  cout<<"Enter the skip count: (Preferred: "<<int(sqrt(n))<<" )";
  cin>>x;
  for(i=0;i<n;i+=x){
    if(a[i+x]>d){
      break;
    }
  }
  for(int t=i;t<n;t++){
    if(a[t]==d){
      cout<<"Element was found at position: "<<t;
      break;
    }
    else if(t==n-1 && a[t]!=d){
      cout<<"Element was not found!"<<endl;
    }
  }
}
