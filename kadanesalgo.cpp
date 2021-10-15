
#include <iostream>
using namespace std;
 
int main() {
    int n,m=0;
    cin>>n;
    int a[n];
    int s=0;
    for(int i=0;i<n;i++)
    {
        s+=a[i];
        if(s<0)
        s=0;
        m=max(m,s);

    }return m;
}