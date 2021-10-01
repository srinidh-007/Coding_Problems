#include <iostream>
using namespace std;
int main(){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    	cin>>arr[i];
	    int max=-9999, max1=0;
	    for(int i=0; i<n; i++){
	        max1 += arr[i];
	        if(max1>max){
	            max=max1;
	        }
	        if(max1<0)
	        	max1=0;
	    }
	    cout<<max<<endl;
	return 0;
}