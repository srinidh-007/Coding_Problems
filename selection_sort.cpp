#include<iostream>
#include<algorithm>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void selection_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        int smallest = arr[i];
        int small_index = i;
        for(int j=i;j<n;j++){
            if(arr[j]<smallest){
                smallest = arr[j];
                small_index = j;
            }
        }
        swap(arr[i],arr[small_index]);
    }
}
int main(){
    int arr[] = {12,1,21,15,13,0,-3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Our array before sorting : ";
    print(arr,n); 
    selection_sort(arr,n);
    cout<<"Array after sorting : ";
    print(arr,n);
    return 0;
}
