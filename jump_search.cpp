// including header files
#include<iostream>
#include<math.h>
// namespace std
using namespace std;
// main function
int main(){
//   integer for taking input of number of elements in array
  int n;
//   instruction to take input
  cout<<"Enter the number of elements: ";
//   taking input
  cin>>n;
//   instruction to take elements in the array
  cout<<"Enter the elements in the sorted order: ";
//   initializing the array of length n
  int a[n];
//   for loop to take input array
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
//   d variable will store the array element to be searched
  int d;
  cout<<"Enter the element to search: ";
  cin>>d;
//   the skip count will be stored in x and i is for iteration in the array
  int x,i;
//   preferred skip count is considered as square root of the length of array
  cout<<"Enter the skip count: (Preferred: "<<int(sqrt(n))<<" )";
  cin>>x;
//   searching the element by skipping the count by x indices
  for(i=0;i<n;i+=x){
//     if the value at next coming index is greater than the search element, the value of i is fixed and loop breaks
    if(a[i+x]>d){
      break;
    }
  }
//   from current index to the next jumped index, each element is checked and if found, that index is printed else a message is printed saying not found
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
