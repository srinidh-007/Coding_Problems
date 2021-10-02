#include <iostream>
#include<cstring>
using namespace std;
typedef long long ll;

int main(){

    string s;
    cin >> s;
    ll len = s.length(),count=0;
    for(ll i=0; i<len; i++){
        if(s[i] == '4' || s[i] == '7') count++;
    }
    ll Count = count;
    while(Count){
        int temp = Count%10;
        if(temp == 4 || temp == 7){
            Count /= 10;
            continue;
        }
        cout << "NO\n";
        goto label;
    }
    if(count == 0 ) cout << "NO\n";
    else cout << "YES\n";
label: 
    return 0;
}